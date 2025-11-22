#include<stdio.h>

int main()

{
    int i, T, n, L, R;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d", &n);
        int value = 0, rat = 0, index = 0;
        for(int j = 1; j <= n; j++) {
            scanf("%d", &L);
            scanf("%d", &R);
            if(L * R > value) {
                value = L * R;
                index = j;
            }
            else if(R > rat) {
                rat = R;
                index = j;
            }
            else if(j > index) {
                index = j;
            }
//            if(L * R >= value) {
//                value = L * R;
//                if(R >= rat) {
//                    rat = R;
//                    if(j >= index) {
//                        index = j;
//                    }
//                }
//            }
        }
        printf("%d\n", index - i);
    }

    return 0;
}
