///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int w;
    scanf("%d", &w);
    if(w != 2 && w % 2 == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}

