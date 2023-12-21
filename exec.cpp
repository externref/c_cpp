#include <cstdio>
#include <string>
#include <filesystem>
#include <format>
#include <stdlib.h>
#include <string.h>

void new_project(std::string filename)
{
    const std::string filetemp = ""
                                 "#include <iostream>\n#include <string>\n\n"
                                 "int main(int argc, char *argv[]){\n"
                                 "\treturn 0;\n}\n";
    system(std::format("mkdir {}", filename).c_str());
    FILE *fptr;
    fptr = std::fopen(std::format("{}/main.cpp", filename).c_str(), "w");
    std::fprintf(fptr, filetemp.c_str());
    std::fclose(fptr);
}

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        printf("Command format:\n./exec <project_name>");
        exit(0);
    }
    std::string proj_name = argv[1];

    if (!strcmp(proj_name.c_str(), "new"))
    {
        std::string new_name = argv[2];
        new_project(new_name);
        return 0;
    }

    if (!std::filesystem::is_directory(proj_name))
    {
        printf(std::format("Project {} does not exist.", proj_name).c_str());
        exit(0);
    }
    std::string arguments = "";
    for (int i = 2; i < argc; i++)
    {
        arguments.append(std::format(" {}", argv[i]));
    }
    const std::string command = std::format("g++ {}/main.cpp -std=c++23 -o program", proj_name);
    system(command.c_str());
    system(std::format("./program {}", arguments).c_str());
    return 0;
}
