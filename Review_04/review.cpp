#include <iostream>
#include "review.h"

void ReadWrite()
{
    std::string str1;
    std::string str2;

    std::cin >> str1;

    while (str1 != "q" && str2 != "q")
    {
        std::cin >> str2;
        if (str2 != "q")
         { str1 += ' ' + str2; }
    }

    std::cout << str1 << ' ' << std::endl;
}
