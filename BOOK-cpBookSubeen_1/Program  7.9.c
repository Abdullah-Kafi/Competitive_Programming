#include<stdio.h>

void test_fun(int ar[])
{
    ar[0] = 1000;
}

int main()
{
    int ar[] = {1, 2, 4, 5, 6};

    printf("%d\n", ar[0]);
    test_fun(ar);
    printf("%d\n", ar[0]);
    return 0;
}
