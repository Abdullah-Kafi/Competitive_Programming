///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int t, n;
    char sign;
    scanf("%c", &sign);
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        scanf("%d", &n);
        if(sign == '+') {
            for(int j = 1; j <= n; j++) {
                printf("%c", sign);
            }
        }
        else if(sign == '-') {
            for(int j = 1; j <= n; j++) {
                printf("%c", sign);
            }
        }
        else if(sign == '*') {
            for(int j = 1; j <= n; j++) {
                printf("%c", sign);
            }
        }
        else if(sign == '/') {
            for(int j = 1; j <= n; j++) {
                printf("%c", sign);
            }
        }
        printf("\n");
    }
    return 0;
}
