    #include <stdio.h>
    void kis(int *a, int *b);

    int main()
    {
        int a = 2, b = 6;
        kis(&a, &b);
        printf("%d,%d", a, b);
        return 0;
    }
    void kis(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
