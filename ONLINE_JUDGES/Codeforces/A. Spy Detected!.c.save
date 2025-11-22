///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#define t_c int t_; scanf("%d", &t_); while(t_--)

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
    int ar[101];
    int n, match1, match2, match2Ind, match1Ind, sum = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        sum += ar[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(ar[i] != ar[i + 1])
        {
            match1 = ar[i];
            match2 = ar[i + 1];
            match1Ind = i;
            match2Ind = i + 1;
            break;
        }
    }

    if(sum - match1 * (n - 1) == match2)
        printf("%d\n", match2Ind + 1);
    else
        printf("%d\n", match1Ind + 1);
}

int main()
{
    #ifndef ONLINE_JUDGE
        /// freopen("input.txt", "r", stdin);
    #endif

    t_c
        solve();

    return 0;
}


