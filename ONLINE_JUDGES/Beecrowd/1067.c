///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    for(int i = 1; i <= X; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}

