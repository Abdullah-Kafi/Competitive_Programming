///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    char alphabet;
    scanf("%c", &alphabet);
    if(alphabet >= 'A' && alphabet <= 'Z') {
        printf("%c\n", alphabet + 32);
    }
    else {
        printf("%c\n", alphabet - 32);
    }
    return 0;
}

