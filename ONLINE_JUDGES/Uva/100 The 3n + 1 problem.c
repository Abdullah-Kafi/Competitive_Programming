#include<stdio.h>

int main() {
    int i, j, maximum = 0, count = 0;
    scanf("%d %d", &i, &j);
    for(i; i <= j; i++) {
        while(i != 1) {
            if(i % 2 != 0) {
                i = 3 * i + 1;
            }
            else {
                i = i / 2;
            }
            count++;
        }
        maximum = (count > maximum) ? count : maximum;
    }
    printf("%d\n", maximum);
    return 0;
}
