#include<stdio.h>

int main()
{
    int num1, num2, sum, sub, mul, div;

    char ch1, ch2, ch3, ch4;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    ch1 = '+';
    ch2 = '-';
    ch3 = '*';
    ch4 = '/';

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("%d %c %d = %d\n", num1, ch1, num2, sum);
    printf("%d %c %d = %d\n", num1, ch2, num2, sub);
    printf("%d %c %d = %d\n", num1, ch3, num2, mul);
    printf("%d %c %d = %d\n", num1, ch4, num2, div);

    return 0;
}
