///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n, Even_count = 0, Odd_count = 0, NegCount = 0, PosCount = 0;
    for(int i = 1; i <= 5; i++) {
        scanf("%d", &n);
        if(n % 2 == 0) {
            Even_count++;
        }
        if(n % 2 != 0) {
            Odd_count++;
        }
        if(n > 0) {
            PosCount++;
        }
        if(n < 0) {
            NegCount++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", Even_count, Odd_count, PosCount, NegCount);
    return 0;
}

