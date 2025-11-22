///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int last1st = n %  10;
    int last2nd = ( n / 10 ) % 10;
    printf("K%d%d\n", last2nd, last1st);
    return 0;
}

