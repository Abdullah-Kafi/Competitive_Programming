///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    int term1, term2, term_final, n;
    printf("Enter Number of Student: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        printf("Enter marks of Student: %d: ", i);
        scanf("%d %d %d", &term1, &term2, &term_final);
        printf("Final Mark of Student: %d: %lf\n", i, term1 * .25 + term2 * .25 + term_final * .5);
    }
    return 0;
}
