///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int x, count = 0;
    scanf("%d", &x);
//    while(1) {
//        if(x % 2 != 0) {
//            printf("%d\n", x++);
//            count++;
//        }
//        if(count == 6) {
//            break;
//        }
//    }
    for(x; count < 6; x++) {
        if(x % 2 != 0) {
            printf("%d\n", x++);
            count++;
        }
    }
    return 0;
}

