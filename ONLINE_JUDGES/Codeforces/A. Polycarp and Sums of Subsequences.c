///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

/******************************************************
<----------------------------------------------------->
<             Abdullah Kafi Chowdhury                 >
<      International Islamic University Chittagong    >
<             Department of CSE                       >
<----------------------------------------------------->
******************************************************/

#include<stdio.h>
#define testCase int __; scanf("%d", &__); while(__--)

//void sort(int ar[], int n)
//{
//    for(int i = 0; i < n - 1; i++)
//    {
//        for(int j = i + 1; j < n; j++)
//        {
//            if(ar[i] > ar[j])
//                swap(&ar[i], &ar[j]);
//        }
//    }
//}

//void swap(int* a, int* b)
//{
//    int t = *a;
//    *a = *b;
//    *b = t;
//}

void solve()
{
    int ar[8];
    for(int i = 0; i < 7; i++)
        scanf("%d", &ar[i]);

    for(int i = 0; i < 7 - 2; i++)
    {
        for(int j = i + 1; j < 7; j++)
        {
            for(int k = j + 1; k < 7; k++)
            {
                if(ar[i] + ar[j] + ar[k] == ar[6])
                {
                    printf("%d %d %d\n", ar[i], ar[j], ar[k]);
                    break;
                }
            }
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        /// freopen("input.txt", "r", stdin);
    #endif

    testCase
        solve();

    return 0;
}



