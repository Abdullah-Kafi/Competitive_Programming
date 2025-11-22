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
#include<string.h>
#include<math.h>
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
    char keyboard[27], s[51];

    scanf(" %s", keyboard);
    int lk = strlen(keyboard);

    scanf(" %s", s);
    int ls = strlen(s);

    int num[51], sum = 0;

    for(int i = 0; i < ls; i++)
    {
        for(int j = 0; j < lk; j++)
        {
            if(s[i] == keyboard[j])
                num[i] = j + 1;
        }
    }

    for(int i = 0; i < ls - 1; i++)
    {
        sum += abs(num[i] - num[i + 1]);
    }

    printf("%d\n", sum);
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



