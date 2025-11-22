///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int firstDigt = ( a <= b ) ? ( ( a <= c ) ? a : c ) : ( ( b <= c ) ? b : c );
    int lastDigt = ( a >= b ) ? ( ( a >= c ) ? a : c ) : ( ( b >= c ) ? b : c );
    int midDigt = ( a + b + c ) - ( firstDigt + lastDigt );
    printf("%d\n%d\n%d\n", firstDigt, midDigt, lastDigt);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}

