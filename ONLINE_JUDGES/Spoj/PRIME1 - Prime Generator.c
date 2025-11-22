#include<stdio.h>
#include<math.h>

int main() {
    int i, T, n, m;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d", &n, &m);
        for(n; n <= m; n++) {
            for(int j = 2; j < sqrt(n); j++) {
                if(n % j != 0) {
                    printf("%d\n", n);
                }
            }
        }
    }
}
