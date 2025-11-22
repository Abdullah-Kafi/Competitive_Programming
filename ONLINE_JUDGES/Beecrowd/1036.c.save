///In the name of Allah, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<math.h>

int main() {
    double a, b, c, insRoot, hor, R1, R2;
    scanf("%lf %lf %lf", &a, &b, &c);

    insRoot = b * b - 4 * a * c;
    hor = 2 * a;

    if(insRoot < 0 || hor == 0) {
        printf("Impossivel calcular\n");
    }
    else {
        printf("R1 = %0.5lf\n", ( ( -1 * b ) + sqrt(insRoot) ) / ( hor ));
        printf("R2 = %0.5lf\n", ( ( -1 * b ) - sqrt(insRoot) ) / ( hor ));
    }
    return 0;
}
