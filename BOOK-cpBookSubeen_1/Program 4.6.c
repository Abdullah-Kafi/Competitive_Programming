#include <stdio.h>

int main()
{
    ///My Code::
//    int n = 1;
//
//    while(n <= 10) {
//        printf("5 X %d = %d\n", n, 5 * n);
//        n++;
//    }
    ///CPBook-1::
    int n = 5;
    int i = 1;

    while(i <= 10) {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    }
    printf("Finally the value assigned in 'i' is: %d\n", i);


    return 0;
}
