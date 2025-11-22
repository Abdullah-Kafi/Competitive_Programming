///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#define PI 3.14159

int main() {
    double R, area;
    scanf("%lf", &R);
    area = PI * R * R;
    printf("A=%0.4lf\n", area);

    return 0;
}

