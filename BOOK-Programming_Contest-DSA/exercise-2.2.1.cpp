#include<stdio.h>
#include<math.h>

int main()
{
    printf("Enter 2D co-ordinate: (x1 y1 x2 y2) in this formate: ");
    int x1, x2, y1, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    double distance = sqrt( (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) );

    printf("%lf\n", distance);
    return 0;
}
