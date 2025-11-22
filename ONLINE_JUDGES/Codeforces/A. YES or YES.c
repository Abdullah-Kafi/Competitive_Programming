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
    char s[4];
    scanf(" %s", s);

    if((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's'))
        printf("YES\n");
    else printf("NO\n");
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


