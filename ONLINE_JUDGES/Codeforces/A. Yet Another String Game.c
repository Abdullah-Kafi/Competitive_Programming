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
    char s[51];
    scanf(" %s", s);
    int l = strlen(s);

    for(int i = 0; i < l; i++)
    {
        if( ( i + 1 ) % 2 != 0 )
        {
            if(s[i] == 'a')
                s[i] = 'b';
            else
                s[i] = 'a';
        }
        else
        {
            if(s[i] == 'z')
                s[i] = 'y';
            else
                s[i] = 'z';
        }
    }
    printf("%s\n", s);
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



