///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int t, a, b, c;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d", &a, &b, &c);
        if( ( a == b ) && ( a != c ) ) {
            printf("%d\n", c);
        }
        else if( ( c == b ) && ( c != a ) ) {
            printf("%d\n", a);
        }
        else {
            printf("%d\n", b);
        }
    }
    return 0;
}

