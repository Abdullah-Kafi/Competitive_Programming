///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    int n = 5;
    int i = 1;
    for(  ;  ;  )
    {
        if(i > 10)
        {
            break;
        }
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}

