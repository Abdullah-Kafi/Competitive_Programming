///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    double n, total = 0.0;
    int count = 0;
    while(1) {
        scanf("%lf", &n);
        if(n >= 0.0 && n <= 10.0) {
            total += n;
            count++;
        }
        else {
            printf("nota invalida\n");
        }
        if(count == 2) {
            break;
        }
    }
    printf("media = %.2lf\n", total / 2);
    return 0;
}

