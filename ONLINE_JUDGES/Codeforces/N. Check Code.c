///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<string.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int a, b; scanf("%d %d", &a ,&b);
    char s[a + b + 2];
    scanf("%s", s);

    int f1, f2; f1 = f2 = 1;
    int len = strlen(s);
    if(s[a] == '-')
    {
        for(int i = 0; i < a; i++)
        {
            if(s[i] < '0' || s[i] > '9')
            {
                f1 = 0;
                break;
            }
        }
        if(!f1) printf("No\n");
        else
        {
            for(int i = a + 1; i < len; i++)
                if(s[i] < '0' || s[i] > '9')
                {
                    f2 = 0;
                    break;
                }
            if(!f2) printf("No\n");
            else printf("Yes\n");
        }
    }
    else printf("No\n");
    return 0;
}
