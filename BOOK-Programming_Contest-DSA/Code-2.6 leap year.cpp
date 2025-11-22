#include<stdio.h>

int main()
{
    ///Find if a given year is leap year or not:

    int y; scanf("%d", &y);

    if((y % 400 == 0 || y % 4 == 0) && y % 100 != 0)
        printf("%d is Leap Year\n", y);
    else
        printf("%d is not Leap Year\n", y);

//    if(y % 400 == 0)
//        printf("%d is Leap Year\n", y);
//    else if(y % 100 == 0)
//        printf("%d is not Leap Year\n", y);
//    else if(y % 4 == 0)
//        printf("%d is Leap Year\n", y);
//    else
//        printf("%d is not Leap Year\n", y);
    return 0;
}

