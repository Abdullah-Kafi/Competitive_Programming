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

void sortD(int ar[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(ar[i] < ar[j])
                swap(&ar[i], &ar[j]);
        }
    }
}

void sortA(int ar[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(ar[i] > ar[j])
                swap(&ar[i], &ar[j]);
        }
    }
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void solve()
{
    int ar[101], n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    sortD(ar, n);

    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] > 0)
            printf("%d ", ++cnt);
        else
            printf("%d ", --cnt);
    }
    printf("\n");

    sortA(ar, n);
    int cntPos = 0, cntNeg = 0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] > 0)
            cntPos++;
        else
            cntNeg++;
    }
    for(int i = 0; i < cntNeg; i++)
    {
        printf("1 0 ");
    }
    cnt = 1;
    for(int i = 0; i < cntPos - cntNeg; i++)
    {
        printf("%d ", cnt++);
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



