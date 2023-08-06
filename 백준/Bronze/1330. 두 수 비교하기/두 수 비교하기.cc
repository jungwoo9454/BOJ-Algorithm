#include <stdio.h>
int main()
{
	short a, b;
	scanf("%d %d", &a, &b);
	if (a > b) printf(">");
	else if(a < b)printf("<");
	else printf("==");
	return 0;
}