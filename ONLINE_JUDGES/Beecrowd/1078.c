///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }
    return 0;
}


