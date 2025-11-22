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
    int n; scanf("%d", &n);

    int ar[200001]; int cnt[200001] = {0};

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &ar[i]);
        cnt[ar[i]]++;
    }

    int f = 0;

    for(int i = 1; i <= n; i++)
    {
        if(cnt[i] >= 3)
        {
            f = 1;
            printf("%d\n", i);
            break;
        }
    }

    if(!f) printf("-1\n");
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


