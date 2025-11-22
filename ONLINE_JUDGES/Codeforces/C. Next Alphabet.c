///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    char alphabet;
    scanf("%c", &alphabet);
    if(alphabet == 'z') {
        printf("a\n");
        return 0;
    }
    printf("%c\n", alphabet + 1);
    return 0;
}

