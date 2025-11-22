///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n, m, start, end;
    while(1) {
        scanf("%d %d", &n, &m);
        int sum = 0;
        if(n < m) {
            start = n;
            end = m;
        }
        else {
            start = m;
            end = n;
        }
        if(( n <= 0 ) || ( m <= 0 )) {
            break;
        }
        for(start; start <= end; start++) {
            printf("%d ", start);
            sum += start;
        }
        printf("sum =%d\n", sum);
    }
    return 0;
}

