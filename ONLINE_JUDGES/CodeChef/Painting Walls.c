///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int x, y, z, t;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d", &x, &y, &z);
        int count = 0;
        int wall = z / 2;
        int area = x * y;
        for( ; area <= ( wall ); area = area + area) {
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

