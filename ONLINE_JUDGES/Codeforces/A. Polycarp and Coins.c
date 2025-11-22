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

    if(n % 3 == 0)
        printf("%d %d\n", n / 3, n / 3);
    else if(( n + 2 ) / 3 + 2 * (n - 1) / 3 == n)
        printf("%d %d\n", (n + 2) / 3, (n - 1) / 3);
    else
        printf("%d %d\n", (n - 2) / 3, (n + 1) / 3);
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


