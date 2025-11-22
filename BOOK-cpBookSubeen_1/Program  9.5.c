#include<stdio.h>

int lenghtOfString(char s[])
{
    int count = 0, sp = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
            sp++;
        count++;
    }
    return count - sp;
}

int main()
{
    char s[] = "My name is Kafi";

    printf("%d\n", lenghtOfString(s));

    return 0;
}
