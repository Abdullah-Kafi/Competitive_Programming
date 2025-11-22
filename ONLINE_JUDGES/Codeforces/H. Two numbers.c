///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

///This was Brainstorming for me
#include<stdio.h>
#include<math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    double value = a * 1.0 / b;

    printf("floor %d / %d = %.0lf\n", a, b, floor(value));
    printf("ceil %d / %d = %.0lf\n", a, b, ceil(value));
    if(( value - floor(value) ) >= .5) {
        printf("round %d / %d = %d\n", a, b, ( a / b ) + 1);
    }
    else {
        printf("round %d / %d = %d\n", a, b, ( a / b ));
    }

    return 0;
}

