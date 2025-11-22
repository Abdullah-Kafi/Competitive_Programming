#include<stdio.h>
#include<string.h>

int main()
{
	char s[10000001];
	int count[26] = {0};
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	scanf("%s", s);
	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		count[ s[i] - 'a' ]++;
	}

	for(int i = 0; i < 26; i++)
	{
		if(count[i] != 0)
			printf("%c : %d\n", alpha[i], count[i]);
	}
	return 0;
}
