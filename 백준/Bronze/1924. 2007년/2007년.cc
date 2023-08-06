#include <stdio.h>
int main()
{
	int day = 0;
	int month = 0;

	scanf("%d %d", &month, &day);

	int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	const char* date[7] = { "SUN","MON","TUE" ,"WED" ,"THU" ,"FRI" ,"SAT" };

	for (int i = 0; i < month - 1; i++)
	{
		day += months[i];
	}

	printf("%s", date[day % 7]);

}