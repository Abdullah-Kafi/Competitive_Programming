///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    ///freopen("input.txt", "r", stdin);

    int ar[110], n, t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    ///MY Implementation:

//    for(int i = 0; i < n; i++)
//    {
//        int min = ar[i];
//        for(int j = i; j < n; j++)
//        {
//            if(ar[j] < min)
//            {
//                t = ar[j];
//                ar[j] = min;
//                min = t;
//            }
//        }
//        ar[i] = min;
//    }

    ///Bubble Sort:

    for(int i = 1; i < n; i++)
    {
        int f = 0;
        for(int j = 0; j < n - i; j++)
        {
            if(ar[j] > ar[j + 1])
            {
                t = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = t;

                f = 1;
            }
        }
        ///if no two element is swapped by inner loop then break
        if(!f)
            break;
        for(int k = 0; k < n; k++)
        {
            printf("%d ", ar[k]);
        }
        printf("\n");
    }
//    for(int i = 0; i < n; i++)
//    {
//        printf("%d ", ar[i]);
//    }
    return 0;
}
