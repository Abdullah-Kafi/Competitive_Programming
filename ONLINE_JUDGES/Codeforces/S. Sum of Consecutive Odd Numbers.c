///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int t, x, y, start, end;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &x, &y);
        int oddSum = 0;
        if(x > y) {
            start = y;
            end = x;
        } else {
            start = x;
            end = y;
        }
        for(start++; start < end; start++) {
            if(start % 2 != 0) {
                oddSum += start;
            }
        }
        printf("%d\n", oddSum);
    }
    return 0;
}

