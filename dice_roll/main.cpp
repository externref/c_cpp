#include <iostream>
#include <random>
#include <string>
#include <format>

int main(int argc, char *argv[])
{
    int guess = std::stoi(argv[1]);
    srand(time(0));
    int output = rand() % 6 + 1;
    if (output == guess)
    {
        printf(std::format("correct! the write guess was {}", guess).c_str());
    }
    else
    {
        printf(std::format("wrong! {} was the right choice.", output).c_str());
    }
    return 0;
}