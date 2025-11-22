///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    ///My_Soln:
    int n, m;
    scanf("%d", &n);
//    while(n--)
//    {
//        scanf("%d", &m);
//        for(int i = 10; i <= m; i++)
//        {
//            if( ( i % 10 ) != ( i / 10 ) )
//            {
//                printf("Different: %d\n", i);
//            }
//            else
//            {
//                printf("Same: %d\n", i);
//            }
//        }
//        printf("---------------------\n");
//    }

//    while(n--)
//    {
//        scanf("%d", &m);
//        for(int i = 10; i <= m; i++)
//        {
//            if(i != 11 && i != 22 && i != 33 && i != 44 && i != 55 && i != 66 && i != 77 && i != 88 && i != 99)
//            {
//                printf("Different: %d\n", i);
//            }
//            else
//            {
//                printf("Same: %d\n", i);
//            }
//        }
//        printf("---------------------\n");
//    }

    ///SubeenSir's_Soln:
    while(n--)
    {
        scanf("%d", &m);
        for(int i = 10; i <= m; i++)
        {
            if(i % 11 == 0)
            {
                printf("Same: %d\n", i);
                continue;
            }
            printf("Different: %d\n", i);
        }
    }
    return 0;
}
