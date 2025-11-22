#include<stdio.h>
#include<math.h>

int main() {
    int i, T, X, Y;
    scanf("%d", &T);
    for(i = 0; i < T; i++) {
        scanf("%d %d", &X, &Y);
        printf("%d\n", abs(X - Y) + 1 + X + Y - 2);
    }
    return 0;
}
