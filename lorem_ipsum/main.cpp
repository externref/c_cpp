#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <time.h>

int main(int argc, char *argv[])
{
    int current_words = 0;
    int required_words = std::stoi(argv[1]);
    std::vector<std::string> words;
    std::vector<std::string> outputWords;
    std::fstream data_file;
    data_file.open("lorem_ipsum/source.txt", std::ios::in);
    std::string data;
    
  
    while (std::getline(data_file, data))
    {
        words.push_back(data);
        current_words++;
    }
    data_file.close();
    srand(time(0));
    for (int i = 0; i < required_words; i++)
    {
        while (1)
        {
            int pos = rand();
            if (pos <= current_words)
            {
                outputWords.push_back(words.at(pos));
                break;
            }
        }
    }
    for (int j=0; j<required_words; j++){
        std::cout<<outputWords.at(j)<<" ";
    }
    return 0;
}