///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int x, y, i, j, sum = 0;
    scanf("%d %d", &x, &y);
    if(x > y) {
        i = y;
        j = x;
    }
    else {
        i = x;
        j = y;
    }
    for(i; i <= j; i++) {
        if(i % 13 != 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}

