//#include<stdio.h>
//
//int main() {
//    int num_1, num_2;
//    float Num_3, Num_4;
//
//    scanf("%d %d", &num_1, &num_2);
//    scanf("%f %f", &Num_3, &Num_4);
//
//    printf("%d %d\n", num_1 + num_2, num_1 - num_2);
//    printf("%0.1f %0.1f\n", Num_3 + Num_4, Num_3 - Num_4);
//
//    return 0;
//}
#include <stdio.h>

// Function to get user input for an integer
int getIntegerInput(const char *prompt) {
    int num;
    printf("%s", prompt);
    while (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer: ");
        while (getchar() != '\n');  // Clear the input buffer
    }
    return num;
}

// Function to get user input for a floating-point number
float getFloatInput(const char *prompt) {
    float num;
    printf("%s", prompt);
    while (scanf("%f", &num) != 1) {
        printf("Invalid input. Please enter a floating-point number: ");
        while (getchar() != '\n');  // Clear the input buffer
    }
    return num;
}

int main() {
    int num1, num2;
    float num3, num4;

    num1 = getIntegerInput("Enter the first integer: ");
    num2 = getIntegerInput("Enter the second integer: ");
    num3 = getFloatInput("Enter the first floating-point number: ");
    num4 = getFloatInput("Enter the second floating-point number: ");

    printf("Sum and Difference of integers: %d %d\n", num1 + num2, num1 - num2);
    printf("Sum and Difference of floating-point numbers: %.1f %.1f\n", num3 + num4, num3 - num4);

    return 0;
}
