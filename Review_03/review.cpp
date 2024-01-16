#include <iostream>
#include "review.h"

void ReadStdIn2()
{
    int not_q {0};
    std::string if_q;

    std::cin >> if_q;

    while (if_q != "q")
    {
        not_q++;
        std::cin >> if_q;
    }

    std::cout << not_q << std::endl;
    
}
