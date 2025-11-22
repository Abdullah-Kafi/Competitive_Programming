#include <stdio.h>

int main()
{
    int n = 5, i;
    ///i = 1;

    for(/*It can be Blank*/i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    printf("Finally the value assigned in 'i' is: %d\n", i);

    return 0;
}
