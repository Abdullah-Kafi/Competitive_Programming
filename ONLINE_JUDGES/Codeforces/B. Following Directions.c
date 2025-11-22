///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>
///B. Following Directions

int main()
{
    ///freopen("input.txt", "r", stdin);

    char s[51]; int n, t, x, y, f;
    scanf("%d", &t);
    while(t--)
    {
        f = y = x = 0;
        scanf("%d", &n);
        scanf("%s", s);
        for(int i = 0; s[i]; i++)
        {
            if(s[i] == 'U')
                y++;
            else if(s[i] == 'D')
                y--;
            else if(s[i] == 'R')
                x++;
            else if(s[i] == 'L')
                x--;
            if(x == 1 && y == 1)
            {
                printf("YES\n");
                f = 1;
                break;
            }
        }
        if(!f)
            printf("NO\n");
    }
    return 0;
}
