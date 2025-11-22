///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

///Class-10: Mod Operation, its cyclic pattern; Decimal, Binary, its properties::

#include<stdio.h>

int main() {

    ///F - Class-10 : Task-5::
    ///Extract digit from a given 3 digit number and make new numbers using these digits
    ///My Code::
//    int abc, bca, cab, a, b, c;
//    scanf("%d", &abc);
//
//    a = abc / 100;
//    b = ( abc % 100 ) / 10;
//    c = ( abc % 100 ) % 10;
//
//    bca = a * 1 + c * 10 + b * 100;
//    cab = b * 1 + a * 10 +  c * 100;
//
//    printf("%d\n", abc + bca + cab);

    ///Instructor's::

//    int n;
//    scanf("%d", &n); /// n = 123 : abc
//
//    int c = n % 10; /// c = 3
//    n = n / 10; /// n = 12
//
//    int b = n % 10; /// b = 2
//    n = n / 10; /// n = 1
//
//    int a = n % 10; /// a = 1
//    n = n / 10; /// n = 0
//
//    ///printf("a = %d, b = %d, c = %d, n = %d\n", a, b, c, n);
//
//    ///int abc = ( a * 10 + b ) * 10 + c;
//
//    int abc = 0; /// abc = 0
//
//    abc = abc + a; /// abc = 0 + 1 = 1
//    abc = abc * 10; /// abc = 1 x 10 = 10
//
//    abc = abc + b; /// abc = 10 + 2 = 12
//    abc = abc * 10; /// abc = 12 x 10 = 120
//
//    abc = abc + c; /// abc = 120 + 3 = 123
//
//    ///printf("%d\n", abc);
//
//    int bca = 0; /// bca = 0
//
//    bca = bca + b; /// bca = 0 + 2 = 2
//    bca = bca * 10; /// bca = 2 x 10 = 20
//
//    bca = bca + c; /// bca = 20 + 3 = 23
//    bca = bca * 10; /// bca = 23 x 10 = 230
//
//    bca = bca + a; /// bca = 230 + 1 = 231
//
//    ///printf("%d\n", bca);
//
//    int cab = 0; /// cab = 0
//
//    cab = cab + c; /// cab = 0 + 3 = 3
//    cab = cab * 10; ///cab = 3 x 10 = 30
//
//    cab = cab + a; /// cab = 30 + 1 = 31
//    cab = cab * 10; /// cab = 31 x 10 = 310
//
//    cab = cab + b; /// cab = 310 + 2 = 312
//
//    ///printf("%d\n", cab);
//
//    printf("%d\n", abc + bca + cab);

//    int n, j;
//    scanf("%d %d", &n, &j);
//    for(int i = 0; i <= n; i++) {
//        printf("%d\n", i % j);
//    }

//    int n;
//    scanf("%d", &n);
//    while(n != 1) {
//        printf("%d", n % 2);
//        n = n / 2;
//    }
    ///End of The Class!

    return 0;
}

