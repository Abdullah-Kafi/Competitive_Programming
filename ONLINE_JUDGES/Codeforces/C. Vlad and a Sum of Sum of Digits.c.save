///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n, t, p, i, sum ;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        i = p = 1;
        sum = 0;
        while(i <= n) {
            sum += (p % 10);
            p /= 10;
            if(p == 0) {
                p = ++i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
