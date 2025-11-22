///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int abc, bca, cab, a, b, c;
    scanf("%d", &abc);

    a = abc / 100;
    b = ( abc % 100 ) / 10;
    c = ( abc % 100 ) % 10;

    bca = a * 1 + c * 10 + b * 100;
    cab = b * 1 + a * 10 +  c * 100;

    printf("%d\n", abc + bca + cab);

//    int n;
//    scanf("%d", &n);
//
//    while(n / 10 != 0) {
//        int a = n % 10;
//        printf("%d\n", a);
//        n = n / 10;
//    }
//    //printf("%d\n", n);

    return 0;
}

