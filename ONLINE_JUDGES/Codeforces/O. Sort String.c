///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int alphaCount[26] = {0}, n;

    scanf("%d", &n);

    char alpha;
    for(int i = 0; i < n; i++)
    {
        scanf(" %c", &alpha); /// " %c" " %s" this format is must
        alphaCount[alpha - 'a']++;
    }

    alpha = 'a';
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < alphaCount[i]; j++)
        {
            printf("%c", alpha);
        }
        alpha++;
    }
    return 0;
}

