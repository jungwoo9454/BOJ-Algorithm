#include <stdio.h>

int main(void)
{
	char word[1000000];

	int check[26] = { 0, };

	scanf("%s", &word);

	for (int i = 0; i < 1000000; i++)
	{
		if (word[i] != '\0')
		{
			if (word[i] >= 97)
				word[i] = word[i] - 32;

			check[word[i] - 65]++;
		}
		else
		{
			break;
		}
	}

	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < 26; i++)
	{
		if (check[i] == 0)
			continue;

		if (max < check[i])
		{
			max = check[i];
			maxIndex = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (i != maxIndex&& max == check[i])
		{
			maxIndex = -1;
			break;
		}
	}

	if (maxIndex >= 0)
		printf("%c", maxIndex + 65);
	else
		printf("?");

	return 0;
}