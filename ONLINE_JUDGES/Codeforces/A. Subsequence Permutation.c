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
    char s[n + 1];
    char sorted[n + 1];
    scanf(" %s", s);
    int count[26] = {0}, cnt = 0;
    for(int i = 0; i < n; i++)
    {
        count[ s[i] - 'a' ]++;
    }
    char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
    int k = 0;
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < count[i]; j++)
        {
            sorted[k] = alpha[i];
            k++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(s[i] != sorted[i])
            cnt++;
    }
    printf("%d\n", cnt);
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


