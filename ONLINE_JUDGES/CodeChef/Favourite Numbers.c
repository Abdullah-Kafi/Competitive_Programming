#include<stdio.h>

int main() {
    int i, T, A;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d", &A);
        if(A % 2 == 0 && A % 7 == 0) {
            printf("Alice\n");
        }
        else if(A % 2 != 0 && A % 9 == 0) {
            printf("Bob\n");
        }
        else {
            printf("Charlie\n");
        }
    }
    return 0;
}
