#include <stdio.h>

int main()
{
    int n = 10;
    //IF one if condition is true, than the other else/else if condition associated with that if will not check
    if(n < 30) {
        printf("%d is less than 30. \n", n);
    }
    else if(n < 50) {
        printf("%d is less than 50. \n");
    }

    return 0;
}
