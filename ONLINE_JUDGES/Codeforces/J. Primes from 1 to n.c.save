///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<math.h>

int main() {
    int t, n;
    scanf("%d", &t);
    for(int j = 2; j <= t; j++) {
        int count = 0;
        for(int i = 2; i <= sqrt(j); i++) {
            if(j % i == 0) {
                count++;
            }
        }
        if(count == 0) {
            printf("%d ", j);
        }
    }
    return 0;
}

