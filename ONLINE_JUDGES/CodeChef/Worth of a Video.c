#include<stdio.h>

int main()
{
    int i, T, X;
    scanf("%d", &T);
    for(i = 0; i < T; i++) {
        scanf("%d", &X);
        printf("%d\n", X * 24000);
    }
    return 0;
}
