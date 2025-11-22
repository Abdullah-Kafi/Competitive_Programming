///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    double a, b, c, A, B, C;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a >= b && b >= c) {
        A = a;
        B = b;
        C = c;
    }
    else if(a >= c && c >= b) {
        A = a;
        B = c;
        C = b;
    }
    else if(b >= a && a >= c) {
        A = b;
        B = a;
        C = c;
    }
    else if(c >= a && a >= b) {
        A = c;
        B = a;
        C = b;
    }
    else if(c >= b && b >= a) {
        A = c;
        B = b;
        C = a;
    }
    else if(b >= c && c >= a) {
        A = b;
        B = c;
        C = a;
    }
    if( A >= ( B + C ) ) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(( A * A ) == ( B * B + C * C )) {
        printf("TRIANGULO RETANGULO\n");
    }
    if(( A * A ) > ( B * B + C * C )) {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(( A * A ) < ( B * B + C * C )) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A == B && B == C && C == A) {
        printf("TRIANGULO EQUILATERO\n");
    }
    if(( ( A == B ) && ( B != C ) ) || ( ( C == B ) && ( B != A ) ) || ( ( A == C ) && ( C != B ) )) {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}

