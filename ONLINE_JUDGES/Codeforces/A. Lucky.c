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
    char s[7];
    scanf(" %s", s);
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < 6; i++)
    {
        if(i < 3)
            sum1 += s[i] - '0';
        else
            sum2 += s[i] - '0';
    }
    if(sum1 == sum2)
        printf("YES\n");
    else
        printf("NO\n");
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


