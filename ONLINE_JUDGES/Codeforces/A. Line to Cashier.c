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
    int min = INT_MAX;
    int cashier; scanf("%d", &cashier);
    int noOfPeople[101];
    for(int i = 0; i < cashier; i++)
    {
        scanf("%d", &noOfPeople[i]);
    }

    for(int i = 0; i < cashier; i++)
    {
        int totalProduct = 0, noOfProduct[101];
        for(int j = 0; j < noOfPeople[i]; j++)
        {
            scanf("%d", &noOfProduct[j]);
            totalProduct += noOfProduct[j];
        }
        if(totalProduct * 5 + noOfPeople[i] * 15 < min)
            min = totalProduct * 5 + noOfPeople[i] * 15;
    }
    printf("%d\n", min);
}

int main()
{
    #ifndef ONLINE_JUDGE
        /// freopen("input.txt", "r", stdin);
    #endif

    //testCase
        solve();

    return 0;
}



