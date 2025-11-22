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
    int a, b, c; scanf("%d %d %d", &a, &b, &c);

    if(a < b && b < c)
        printf("STAIR\n");
    else if(a < b && b > c)
        printf("PEAK\n");
    else
        printf("NONE\n");
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


