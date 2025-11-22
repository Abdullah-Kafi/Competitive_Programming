#include <stdio.h>

int main()
{
    int n = 1;

    while(n <= 10) {
        printf("%d\n", n++);
        //printf("%d\n", n);
        //n++;
        //n = n + 1;
    }
    printf("%d\n", n);
    printf("%d\n", n);
    return 0;
}
