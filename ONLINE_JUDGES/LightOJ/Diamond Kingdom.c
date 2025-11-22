///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int t, n, m;
    scanf("%d", &t);
    scanf("%d %d", &n, &m);
    while(t--) {
        for(int i = 1; i <= ( 2 * n - 1 ); i++) {
            for(int z = 1; z <= n; z++) {
                for(int j = 1; j <= z; j++) {
                    printf("%d", m);
                    if(j != z) {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}

