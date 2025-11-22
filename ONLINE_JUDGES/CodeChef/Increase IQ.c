#include<stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    if((X += 7) > 170) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
