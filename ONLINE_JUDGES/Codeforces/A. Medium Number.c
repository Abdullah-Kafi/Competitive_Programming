///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

void sort(int ar[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(ar[i] > ar[j])
                swap(&ar[i], &ar[j]);
        }
    }
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    #ifndef ONLINE_JUDGE
        /// freopen("input.txt", "r", stdin);
    #endif

    int t; scanf("%d", &t);

    while(t--)
    {

        int ar[3];
        for(int i = 0; i < 3; i++)
            scanf("%d", &ar[i]);

        sort(ar, 3);
        printf("%d\n", ar[1]);

//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//        if(b < a && a < c)
//            printf("%d\n", a);
//        else if(c < a && a < b)
//            printf("%d\n", a);
//        else if(a < b && b < c)
//            printf("%d\n", b);
//        else if(c < b && b < a)
//            printf("%d\n", b);
//        else if(b < c && c < a)
//            printf("%d\n", c);
//        else if(a < c && c < b)
//            printf("%d\n", c);
    }
    return 0;
}

