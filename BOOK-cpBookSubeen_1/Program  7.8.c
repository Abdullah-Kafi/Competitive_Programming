#include<stdio.h>
#include<limits.h>

int findMax(int ar[], int n)
{
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] > max)
            max = ar[i];
    }
    return max;
}

int findMin(int ar[], int n)
{
    int min = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        if(ar[i] < min)
            min = ar[i];
    }
    return min;
}

int main()
{
    int ar[100000], n;
    printf("Enter The Size of the Array: ");
    scanf("%d", &n);

    printf("Enter Each Number: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("The Maximum number is: %d\n", findMax(ar, n));
    printf("The Minimun number is: %d\n", findMin(ar, n));

    return 0;
}
