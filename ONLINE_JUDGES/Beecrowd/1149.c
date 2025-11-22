///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int a, n, sum = 0, i = 1;
    scanf("%d %d", &a, &n);
    while(n <= 0) {
        scanf("%d", &n);
    }
    while(i <= n) {
        sum += a;
        a++;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}

