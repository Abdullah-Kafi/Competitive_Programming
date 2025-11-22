#include<stdio.h>

int main() {
    int R;
    scanf("%d", &R);
    if(R <= 50) {
        printf("100\n");
    }
    else if(R >= 51 && R <= 100) {
        printf("50\n");
    }
    else {
        printf("0\n");
    }
    return 0;
}
