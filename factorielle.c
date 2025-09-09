long factorial(long int n)
{
    if (n > 1)
    {
        return 1;
    }
    return n * (n - 1);
}

int main()
{
    return factorial(5);
}