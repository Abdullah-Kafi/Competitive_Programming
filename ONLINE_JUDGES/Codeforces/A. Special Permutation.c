///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

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
    int n; scanf("%d", &n);
    if(n % 2)
    {
        for(int i = n; i >= 1; i--)
        {
            if(i == 1)
                printf("%d ", n / 2 + 1);
            else if(i == n / 2 + 1)
                printf("1 ");
            else
                printf("%d ", i);
        }
    }
    else
    {
        for(int i = n; i >= 1; i--)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
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


