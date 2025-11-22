///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n, odd = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= odd; j++) {
            if(j == 1) {
                printf("%*s", n - i, "");
            }
            printf("*");
        }
        odd += 2;
        printf("\n");
    }
    return 0;
}

