#include<string>
#include<filesystem>
#include<format>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    if (argc<2){
        printf("Command format:\n./exec <project_name>");
        exit(0);
    }
    std::string proj_name = argv[1];
    
    if (!std::filesystem::is_directory(proj_name)){
        printf(std::format("Project {} does not exist.", proj_name).c_str());
        exit(0);
    }
    std::string arguments = "";
    for(int i=2; i<argc; i++){
        arguments.append(std::format(" {}", argv[i]));
    }
    const std::string command = std::format("g++ {}/main.cpp -o program", proj_name);
    system(command.c_str());
    system(std::format("program {}", arguments).c_str());
    return 0;

    
}