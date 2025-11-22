#include<stdio.h>

int main() {
    int i, T, a, b, c;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if((a + b) == c) {
            printf("+\n");
        }
        else {
            printf("-\n");
        }
    }

    return 0;
}

