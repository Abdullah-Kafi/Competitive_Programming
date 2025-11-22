#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter a English Alphabet : ");
    scanf("%c", &alphabet);

    if(alphabet >= 'a' && alphabet <= 'z') {
        printf("%c is lower case letter. \n", alphabet);
    }
    else if(alphabet >= 'A' && alphabet <= 'Z') {
        printf("%c is UPPER CASE letter. \n", alphabet);
    }

    return 0;
}
