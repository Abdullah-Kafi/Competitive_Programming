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
    char s1[3], s2[3];
    scanf(" %s", s1);
    scanf(" %s", s2);

    int count[26] = {0}, cnt = 0;
    count[ s1[0] - 'a' ]++;
    count[ s1[1] - 'a' ]++;
    count[ s2[0] - 'a' ]++;
    count[ s2[1] - 'a' ]++;

    for(int i = 0; i < 26; i++)
        if(count[i] != 0)
            cnt++;
    printf("%d\n", cnt - 1);
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


