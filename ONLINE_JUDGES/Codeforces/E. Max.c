///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int t, n, max = 0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        max = ( n > max ) ? n : max;
    }
    printf("%d\n", max);
    return 0;
}

