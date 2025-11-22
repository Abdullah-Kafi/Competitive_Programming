///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int n = 1; n <= t; n++) {
        if(n * ( n + 1 ) / 2 == t) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}

