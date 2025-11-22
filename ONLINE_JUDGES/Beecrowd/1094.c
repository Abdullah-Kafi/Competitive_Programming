///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int t, amount, total = 0, totalC = 0, totalR = 0, totalS = 0;
    char ch;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %c", &amount, &ch);
        total += amount;
        if(ch == 'C') {
            totalC += amount;
        }
        else if(ch == 'R') {
            totalR += amount;
        }
        else if(ch == 'S') {
            totalS += amount;
        }
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    printf("Percentual de coelhos: %.2lf %%\n", ( totalC * 1.0 / total ) * 100);
    printf("Percentual de ratos: %.2lf %%\n", ( totalR * 1.0 / total ) * 100);
    printf("Percentual de sapos: %.2lf %%\n", ( totalS * 1.0 / total ) * 100);
    return 0;
}

