///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int a, b, end, max = 1;
    scanf("%d %d", &a, &b);
    if(a >= b) {
        end = a;
    }
    else {
        end = b;
    }
    for(int i = 1; i <= end; i++) {
        if(( a % i == 0 ) && ( b % i == 0 )) {
            max = ( i >= max ) ? i : max;
        }
    }
    printf("%d\n", max);
    return 0;
}

