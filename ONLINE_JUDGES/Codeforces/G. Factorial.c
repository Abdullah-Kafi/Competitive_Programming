///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);

    while(t--) {
        scanf("%d", &n);
        long long int factorial = 1;
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("%lld\n", factorial);
    }
    return 0;
}

