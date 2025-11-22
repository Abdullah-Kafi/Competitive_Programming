///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<string.h>
///A. Way Too Long Words

int main()
{
    ///freopen("input.txt", "r", stdin);

    int t;
    char s[100];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", s);
        int n = strlen(s);
        if(n > 10)
        {
            printf("%c%d%c", s[0], n - 2, s[n - 1]);
            printf("\n");
        }
        else
            printf("%s\n", s);
    }
    return 0;
}
