#include<stdio.h>

int main() {
    int i, N, X, count1 = 0, count2 = 0;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        scanf("%d", &X);
        if(X % 2 == 0) {
            count1++;
        }
        else {
            count2++;
        }
    }
    if(count1 > count2) {
        printf("READY FOR BATTLE\n");
    }
    else {
        printf("NOT READY\n");
    }
    return 0;
}
