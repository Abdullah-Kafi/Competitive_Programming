///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<string.h>
///A. New Palindrome

int main()
{
    ///freopen("input.txt", "r", stdin);

    int t, n;
    char s[55];
    scanf("%d", &t);
    while(t--)
    {
        int f = 1;
        scanf("%s", s);
        n = strlen(s);
        for(int i = 0; i < n / 2 - 1; i++)
        {
            if(s[i] != s[i + 1])
                f = 0;
        }
        if(!f)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
