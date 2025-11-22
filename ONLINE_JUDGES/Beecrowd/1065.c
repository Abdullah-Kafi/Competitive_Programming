///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n, count = 0;
    for(int i = 1; i <= 5; i++) {
        scanf("%d", &n);
        if(n % 2 == 0) {
            count++;
        }
    }
    printf("%d valores pares\n", count);
    return 0;
}

