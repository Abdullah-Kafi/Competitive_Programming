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
#include<limits.h>

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
    int n, k; scanf("%d %d", &n, &k);
    int ar[k + 10], sum = 0, cnt = 0;
    int max = INT_MIN;

    for(int i = 0; i < k; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] >= 2)
        {
            sum += ar[i];
            cnt++;
        }
        if(ar[i] >= max)
            max = ar[i];
    }

    printf("%d\n", 2 * (sum - max) - (cnt - 1) + k - cnt);
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



