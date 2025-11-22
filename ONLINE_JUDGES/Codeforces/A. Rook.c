///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int n, t;
    char alpha;
    scanf("%d", &t);
    while(t--) {
        scanf(" %c%d", &alpha, &n);
        for(int i = 1; i <= 8; i++) {
            if(i == n) {
                continue;
            }
            printf("%c%d\n", alpha, i);
        }
        for(char ch = 'a'; ch <= 'h'; ch++) {
            if(ch == alpha) {
                continue;
            }
            printf("%c%d\n", ch, n);
        }
    }
    return 0;
}
