///In the name of Allah, The Most Gracious and The Most Merciful
///Praise be to ALLAH

///Class-8: Taking input using Scanf, More Data types, variables and operators::

#include<stdio.h>
#include<limits.h>

int main() {
    ///Introduction to double & float data type::
//    double PI = 3.1416;
//    printf("PI = %lf\n", PI);
//
//    double d = 485.93892854824449938;
//    printf("d = %0.13lf\n", d);
//
//    float f = 39.2937387575;
//    printf("f = %0.10f\n", f);
//
//    double d = 39.29373875753784;
//    printf("d = %0.16lf\n", d);
//
//    double a = 2.60, b = 5.83;
//    printf("Sum is: %lf\n", a + b);
//
//    double a = 7, b = 2;
//    printf("Division is: %lf\n", a / b);
//
//    double a = 1982, b = 38;
//    printf("%0.19lf\n", a / b);

    ///Example of Division with int and double::
//    int a = 10;
//    int b = 3;
//    //double b = 3;
//    //double c = a / 3.0;
//    //double c = a / b;
//    //double c = 1.0 * a / b;
//    //double c = a / (b * 1.0);
//    //double c = (double) a / b;
//    double d = (double) a;
//    printf("d = %lf\n", d);
//    printf("Division is: %lf\n", c);
//
//    double a = 10, b = 3;
//    int c = a / b;
//    printf("Division is: %d\n", c);
//
//    double e = 12.92;
//    int i = e;
//    printf("type casted value of e is: %d\n", i);
//    printf("i = %d\n", (int) e);

    ///Solving an equation:: {c x (a - b)} / {f x (d + e)}
//    int a = 2, b = 4, c = 10, d = 11, e = 13, f = 3;
//    //double lob = c * (a - b), hor = f * (d + e);
//    double sol = ( ( 1.0 * c * ( a - b ) ) / ( f * ( d + e ) ) );
//    //printf("Solution: %lf\n", lob / hor);
//    printf("Solution: %lf\n", sol);

    ///More About Data Types - long long int, char::
//    int a = 1234567890, b = 1234567890;
//
//    printf("%d\n", a + b);

//    int a = 1234567890, b = 1234567890;
//
//    printf("%lld\n", (long long int)a + b); //Explicitly casting one operand to long long

//    long long int a = 1234567890, b = 1234567890;
//
//    printf("%lld\n", a + b);

//    printf("Minimum value for int: %d\n", INT_MIN);
//    printf("Maximum value for int: %d\n", INT_MAX);
//
//    printf("Minimum value for long long int: %lld\n", LLONG_MIN);
//    printf("Maximum value for long long int: %lld\n", LLONG_MAX);

//    unsigned int a = 4000000000;
//    printf("%u\n", a);

//    int a = 12132; //It is a number and it consists of digits
//    printf("There are many 123 character\n"); // The string consists of character. Where 1, white-spaces included

//    char character = 'a';
//    printf("%c is a Character.\n", character);
//
//    character = '1';
//    printf("%c is a Character.\n", character);

    ///Taking user input - scanf()
//    int a, b;
//    printf("Enter a number: ");
//    scanf("%d", &a);
//    printf("Enter another number: ");
//    scanf("%d", &b);
//    printf("You entered: %d\n", a);
//    printf("You entered: %d\n", b);

//    int a, b, c, d, e;
//    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//
//    printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);

//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    printf("%d\n", a + b);

//    long long a, b;
//    scanf("%lld %lld", &a, &b);
//    printf("%lld %lld\n", a, b);

//    double a, b;
//    scanf("%lf %lf", &a, &b);
//    printf("%lf %lf\n", a, b);

//    float a, b;
//    scanf("%f %f", &a, &b);
//    printf("%f %f\n", a, b);

//    char a, b;
//    scanf("%c %c", &a, &b);
//    printf("%c %c\n", a, b);

//    int i;
//    long long int l;
//    float f;
//    double d;
//    char ch;
//
//    scanf("%d %lld %f %lf %c", &i, &l, &f, &d, &ch);
//
//    printf("%d %lld %f %lf %c\n", i, l, f, d, ch);
    ///End of The Class!

    return 0;
}
