/*
Suite de Fibonacci :1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765
Place : 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22

fib(7)  = fib(6) + fib(5)
21. = 13 + 8

fib(n)= fib(n-1) + fib(n-2)
*/

int fibonacci(int postion)
{
    if (postion < 2)
    {
        return 1;
    }
    return fibonacci(postion - 1) + fibonacci(postion - 2);
}

int main()
{
    return fibonacci(7);
}