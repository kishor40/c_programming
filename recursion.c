#include <stdio.h>
int factorial(int n);

int main()
{
    printf("%d\n", factorial(5));

    return 0;
}
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int c = factorial(n - 1);
    int a = c * n;
    return a;
}