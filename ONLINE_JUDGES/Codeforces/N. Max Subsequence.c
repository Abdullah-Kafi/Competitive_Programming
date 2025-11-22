///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<stdio.h>

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    int n, cnt = 0; scanf("%d", &n);
    char s[100001], newAr[100001]; scanf(" %s", s);

//    for(int i = 0; i < n - 1; i++)
//    {
//        if(s[i] != s[i + 1])
//            cnt++;
//    }
    int j = 0, last;
    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] != s[i + 1])
        {
            newAr[j] = s[i];
            j++;
            last = i + 1;
        }
    }

    newAr[j] = s[last];
    newAr[j + 1] = '\0';


    //printf("%d\n", cnt + 1);
    printf("%s\n", newAr);
    return 0;
}

