#include<stdio.h>

int main() {
    int i, T, a, b;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d", &a, &b);
        if((a + b) > 6) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}
