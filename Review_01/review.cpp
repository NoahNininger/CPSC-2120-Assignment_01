#include <iostream>
#include "review.h"

void ReadStdIn()
{
    int integer;
    double doub;
    std::string word;

    std::cin >> integer;
    std::cin >> doub;
    std::cin >> word;

    std::cout << integer << std::endl
              << doub << std::endl
              << word << std::endl;
}
