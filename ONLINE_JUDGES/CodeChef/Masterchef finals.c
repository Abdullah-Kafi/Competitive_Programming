#include<stdio.h>

int main() {
    int i, T, current_rank;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d", &current_rank);
        if(current_rank > 10) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}
