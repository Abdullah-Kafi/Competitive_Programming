///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n, firstD = -1, secondD = 1, thirdD;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        thirdD = firstD + secondD;
        firstD = secondD;
        secondD = thirdD;
        printf("%d ", thirdD);
    }
    return 0;
}

