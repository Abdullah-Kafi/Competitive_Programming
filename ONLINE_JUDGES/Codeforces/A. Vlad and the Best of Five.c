///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main() {
    int t, countA, countB;
    char ch;
    scanf("%d", &t);
    while(t--)
    {
        countA = 0;
        countB = 0;
        for(int i = 1; i <= 5; i++)
        {
            scanf(" %c", &ch);
            if(ch == 'A')
            {
                countA++;
            }
            else
            {
                countB++;
            }
        }
        if(countA > countB)
        {
            printf("A\n");
        }
        else
        {
            printf("B\n");
        }
    }
    return 0;
}

