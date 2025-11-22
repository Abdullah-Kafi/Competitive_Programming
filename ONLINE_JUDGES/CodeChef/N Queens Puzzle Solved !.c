#include<stdio.h>
#include<math.h>

int main()
{
    int i, T;
    float base, value;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &N);
        base = 0.143 * N;
        value = pow(base, N);
        printf("%f\n", value);
    }
    return 0;
}
