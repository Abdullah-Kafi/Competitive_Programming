///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int x, y, i, j;
    scanf("%d %d", &x, &y);
    if(x < y) {
        i = x;
        j = y;
    }
    else {
        i = y;
        j = x;
    }
    for(i++; i < j; i++) {
        if( ( i % 5 == 2 ) || ( i % 5 == 3 ) ) {
            printf("%d\n", i);
        }
    }
    return 0;
}

