///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int count = 0;
    for(int i = 100000000; i <= 900000000; i++) {
        count++;
    }
    printf("%d\n", count - 1);
    return 0;
}

