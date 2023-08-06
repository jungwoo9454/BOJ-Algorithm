#include <stdio.h>
int main()
{
	int tile[1001] = {0,1,2};
	int n;
	scanf("%d", &n);

	for (int i = 3; i <= n; i++) {
		tile[i] = (tile[i - 1] + tile[i - 2]) % 10007;
	}
	printf("%d", tile[n]);
	return 0;
}