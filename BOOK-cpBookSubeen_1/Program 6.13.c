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
    int total_marks[10];
    int count[101] = {0};

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &total_marks[i]);
        count[ total_marks[i] ]++;
    }

    for(int i = 1; i <= 100; i++)
    {
        if(count[i] != 0)
        {
            printf("Marks : %d, Count : %d\n", i, count[i]);
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        /// freopen("input.txt", "r", stdin);
    #endif

    ///testCase
        solve();

    return 0;
}


