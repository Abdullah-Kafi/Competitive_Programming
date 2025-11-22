///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int i = 1, j = 60;
    while(j != -5) {
        printf("I=%d J=%d\n", i, j);
        i += 3;
        j -= 5;
    }
    return 0;
}

