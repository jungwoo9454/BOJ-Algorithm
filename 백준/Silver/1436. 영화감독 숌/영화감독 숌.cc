#include <stdio.h>


int check(int n)
{
	while (n != 0)
	{
		if (n % 1000 == 666)
		{
			return 1;
		}
		n /= 10;
	}

	return 0;
}

int main(void)
{

	int n;
	scanf("%d", &n);

	int start = 666;
	int count = 1;
	while (1)
	{
		if (count == n)
		{
			printf("%d", start);
			break;
		}
		start++;
		count += check(start);
	}

	return 0;
}