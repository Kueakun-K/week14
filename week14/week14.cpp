#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count(char* z)
{
	int a = 0;
	while (z[a] != '\0')
	{
		a++;
	}
	return a;
}
void key(char* str)
{
	int i, j;
	for (i = 0; i < count(str); i++)
	{
		printf("%c", str[i]);
		if (str[i] == str[i + 1])
		{
			for (j = i; str[j] == str[j + 1]; j++)
			{
				i = j + 1;
			}
		}

	}
}
int main()
{
	char x[1000];
	scanf("%s", x);
	key(x);
	return 0;
}