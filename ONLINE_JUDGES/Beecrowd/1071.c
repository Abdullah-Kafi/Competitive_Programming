///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int X, Y, sum = 0;
    scanf("%d %d", &X, &Y);
    if( X < Y ) {
        for(int i = ++X; i < Y; i++) {
            if(i % 2 != 0) {
                sum += i;
            }
        }
    }
    else {
        for(int i = --X; i > Y; i--) {
            if(i % 2 != 0) {
                sum += i;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}

