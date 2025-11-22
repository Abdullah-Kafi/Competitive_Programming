#include<stdio.h>

int main() {
    int X;
    float Y;
    scanf("%d %f", &X, &Y);
    if(X % 5 == 0 && X <= Y - 0.5) {
        printf("%0.2f\n", Y - ((float)X + 0.5));
    }
    else {
        printf("%0.2f\n", Y);
    }
    return 0;
}
