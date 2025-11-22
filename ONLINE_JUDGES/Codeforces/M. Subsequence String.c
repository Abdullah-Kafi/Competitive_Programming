///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
#include<string.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    char string[10001]; scanf(" %s", string);
    int len = strlen(string);
    char match[] = "hello";
    int j = 0, f;
    for(int i = 0; i < 5; i++)
    {
        f = 0;
        for( ; j < len; j++)
        {
            if(match[i] == string[j])
            {
                f = 1;
                j++;
                break;
            }
        }
    }
    if(!f) printf("NO\n");
    else printf("YES\n");

    return 0;
}

