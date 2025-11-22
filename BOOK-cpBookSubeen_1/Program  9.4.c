#include<stdio.h>
#include<string.h>


int main()
{
    char s[] = "MY Name IS kaFi" ;

    printf("%s\n", s);

    int len = strlen(s);

    for(int i = 0; i < len; i++)
    {
        ///ToUpper:
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        ///OR
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = 'A' + (s[i] - 'a');

        ///ToLower:
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        ///OR
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 'a' + (s[i] - 'A');
    }

    printf("%s\n", s);
    return 0;
}
