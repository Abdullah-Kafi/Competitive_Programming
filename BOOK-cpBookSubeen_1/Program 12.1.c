#include<stdio.h>
#include<string.h>
#include<math.h>

long long power(int n, int m)
{
    long long mul = 1;
    for(int i = 1; i <= m; i++)
        mul *= n;
    return mul;
}

char bin[100000];

void decToBin(long long n) /// Idea & Implementation by ME:
{
    int i = 0;

    while(n)
    {
        bin[i] = '0' + n % 2; /// digit 1/0 to char '1'/'0'
        n /= 2;
        i++;
    }
    bin[i] = '\0';

    int l = strlen(bin);

    for(int i = 0; i < l / 2; i++)
    {
        char t = bin[i];
        bin[i] = bin[l - 1 - i];
        bin[l - 1 - i] = t;
    }
}

void decToBin_2(long long x) /// Idea from cpBookSubeen-1, Implementation by ME:
{
    int n = (log10(x) / log10(2));

    int i;
    for(i = n; i >= 0; i--)
    {
        long long pwr = power(2, i);
        if(pwr <= x)
        {
            bin[n - i] = '1';
            x -= pwr;
        }
        else bin[n - i] = '0';
    }
    bin[n + 1] = '\0';
}

int main()
{
    /// Binary to Decimal:

//    char bin[100000];
//    scanf(" %s", bin);
//
//    int len = strlen(bin);
//
//    long long sum = 0;
//
//    for(int i = 0; i < len; i++)
//        sum += (bin[i] - '0') * power(2, len - 1 - i); /// char '1'/'0' to digit 1/0
//
//    printf("%lld\n", sum);

    /// Decimal to Binary:

    long long n; scanf("%lld", &n);

    decToBin_2(n);

    printf("%s\n", bin);

    return 0;
}
