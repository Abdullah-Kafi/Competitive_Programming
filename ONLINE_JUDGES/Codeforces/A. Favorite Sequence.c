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
    int n;
    scanf("%d", &n);

    int ar[n + 10];

    for(int i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    for(int i = 0; i < n / 2; i++)
    {
        printf("%d %d ", ar[i], ar[n - 1 - i]);
    }

    if(n % 2)
        printf("%d\n", ar[n / 2]);
    else
        printf("\n");
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


