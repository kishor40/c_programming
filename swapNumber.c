    #include <stdio.h>
    void swap(int *a, int *b);

    int main()
    {
        int a = 2, b = 6;
        swap(&a, &b);
        printf("%d,%d", a, b);
        return 0;
    }
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
