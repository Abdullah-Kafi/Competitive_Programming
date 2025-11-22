#include<stdio.h>

int main()
{
    int total_distance;
    float total_fuel_spent;
    scanf("%d %f", &total_distance, &total_fuel_spent);
    printf("%0.3f km/l\n", total_distance / total_fuel_spent);

    return 0;
}
