#include<stdio.h>

int main() {
    char name[100];
    scanf("%s", name);
    double salary, value_sold, total;
    scanf("%lf %lf", &salary, &value_sold);
    total = salary + value_sold * (15 / 100.0);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
