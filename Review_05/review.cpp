#include "review.h"

std::vector <int> InitializeArray(int size)
{
    std::vector <int> v1;
    for (int i = 0; i <= size; i++)
        { v1.push_back(0); }
    return v1;
}
