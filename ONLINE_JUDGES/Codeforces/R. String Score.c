///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int n, score = 0;
    scanf("%d", &n);

    char s[n + 10];
    scanf(" %s", s);

    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] == 'V') score += 5;
        else if(s[i] == 'W') score += 2;
        else if(s[i] == 'X')
        {
            for(int j = i + 1; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }
            n--;
            s[n - 1] = '\0';
        }
        else if(s[i] == 'Y')
        {
            for(int j = i + 1; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }
            s[n - 1] = s[i + 1];
        }
        else if(s[i] == 'Z' && s[i + 1] == 'V')
        {
            score /= 5;
            for(int j = i + 1; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }
            n--;
            s[n - 1] = '\0';
        }
        else if(s[i] == 'Z' && s[i + 1] == 'W')
        {
            score /= 2;
            for(int j = i + 1; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }
            n--;
            s[n - 1] = '\0';
        }
    }

    printf("%d\n", score);
    return 0;
}
