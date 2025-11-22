#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if(num >= 1 || num <= 10) {
        printf("YES \n");
    }
    else {
        printf("NO \n");
    }

    return 0;
}
