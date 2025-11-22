///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<math.h>

int main() {
    int n, t, sum = 0;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        scanf("%d", &n);
        sum += n;
    }
    printf("%d\n", abs(sum));
    return 0;
}

