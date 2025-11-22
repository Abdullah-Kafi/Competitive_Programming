#include<stdio.h>
#include<string.h>

void numToString(int n);
int checkPali();

char numString[100000];
int cnt = 0;

int main()
{
    int n; scanf("%d", &n);

    int i = 1;
    while(1)
    {
        numToString(i);
        checkPali();
        if(cnt == n)
        {
            printf("%d\n", i);
            break;
        }
        i++;
    }

    return 0;
}

void numToString(int n)
{
    ///Number to String Format:
//    int n; scanf("%d", &n);

    int i = 0;
    while(n)
    {
        numString[i] = '0' + (n % 10);
        n /= 10;
        i++;
    }
    numString[i] = '\0';
}

int checkPali()
{
    int len = strlen(numString);

    int f = 0;
    for(int i = 0; i < len / 2; i++)
    {
        if(numString[i] != numString[len - 1 - i])
        {
            f = 1;
            break;
        }
    }
    if(!f) cnt++;
    return cnt;
}
