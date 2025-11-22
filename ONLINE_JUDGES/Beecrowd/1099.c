///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int t, x, y;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        scanf("%d %d", &x, &y);
        int sum = 0;
        if( x < y ) {
            for(x++; x < y; x++) {
                if(x % 2 != 0) {
                    sum += x;
                }
            }
        }
        else {
            for(x--; x > y; x--) {
                if(x % 2 != 0) {
                    sum += x;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}

