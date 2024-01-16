#include "review.h"

int Fibonacci(int a)
{
    if (a <= 1)
     { return a; }
    return Fibonacci(a - 1) + Fibonacci(a - 2);
}
