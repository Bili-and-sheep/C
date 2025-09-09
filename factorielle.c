#include <stdlib.h>

long factorial(long int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    exit(10);
    // return factorial(5);  // limited to 255 due to stack depth
}