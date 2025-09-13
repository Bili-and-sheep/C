int write(int, char *, int);

void write_digit(int number)
{
    char c;

    c = number + 0x30;
    write(1, &c, 1);
}

void write_number(long number)
{
    if (number == 0)
        return;
    write_number(number / 10);
    write_digit(number % 10);
}

void syracuse(long n)
{
    write_number(n);
    write(1, "\n", 1);

    if (n == 1)
        return;

    if (n % 2 == 0)
    {
        // write_number(n);
        // write(1, "\n", 1);
        syracuse(n / 2);
    }
    else
    {
        // write_number(n);
        // write(1, "\n", 1);
        syracuse(3 * n + 1);
    }
}

int main()
{
    syracuse(14);
}