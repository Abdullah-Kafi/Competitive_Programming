///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    double n, posSum = 0, avg;
    int count = 0;
    for(int i = 1; i <= 6; i++) {
        scanf("%lf", &n);
        if(n > 0.0) {
            posSum += n;
            count++;
        }
    }
    avg = posSum / count;
    printf("%d valores positivos\n", count);
    printf("%0.1lf\n", avg);
    return 0;
}

