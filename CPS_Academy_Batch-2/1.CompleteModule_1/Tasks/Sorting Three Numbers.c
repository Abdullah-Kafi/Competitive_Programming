///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
//    int a, b, c, first, second, third;
//    scanf("%d %d %d", &a, &b, &c);
//    if(a <= b && b <= c)
//    {
//        printf("%d %d %d\n", a, b, c);
//    }
//    if(b <= a && a <= c)
//    {
//        printf("%d %d %d\n", b, a, c);
//    }
//    if(c <= a && a <= b)
//    {
//        printf("%d %d %d\n", a, b, c);
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int first = ( a <= b ) ? ( ( a <= c ) ? a : c ) : ( ( b <= c ) ? b : c );
    int last = ( a >= b ) ? ( ( a >= c ) ? a : c ) : ( ( b >= c ) ? b : c );
    int middle = ( a + b + c ) - ( first + last );

    printf("%d %d %d\n", first, middle, last);
    return 0;
}


