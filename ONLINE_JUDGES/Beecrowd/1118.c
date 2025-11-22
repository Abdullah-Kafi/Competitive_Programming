///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    double x, sum = 0.0;
    int count = 0, X, n;
    while(1) {
        scanf("%lf", &x);
        if(x >= 0.0 && x <= 10.0) {
            sum += x;
            count++;
        }
        else {
            printf("nota invalida\n");
        }
        if(count == 2) {
            printf("media = %.2lf\n", sum / 2);
            scanf("%d", &X);
            printf("novo calculo (1-sim 2-nao)\n");
            if(X < 1 || X > 2) {
               printf("novo calculo (1-sim 2-nao)\n");
            }
            else if(X == 2) {
                break;
            }
            scanf("%d", &n);
            if(n == 1) {
                sum = 0.0;
                count = 0;
            }
            else {
                break;
            }
        }
    }
    return 0;
}


