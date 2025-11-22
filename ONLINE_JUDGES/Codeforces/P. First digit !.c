///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if( ( a / 1000 ) % 2 == 0 ) {
        printf("EVEN\n");
    }
    else {
        printf("ODD\n");
    }
    return 0;
}

