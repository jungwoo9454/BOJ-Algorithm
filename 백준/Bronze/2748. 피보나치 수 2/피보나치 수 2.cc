#include <stdio.h>

int main(void) {
    
    int max;
    long long n[91] = {0,};
    
    n[0] = 0;
    n[1] = 1;
    
    scanf("%d", &max);
    
    for(int i=2;i<91;i++)
    {
        n[i] = n[i-1] + n[i-2];
    }
    
    printf("%ld",n[max]);
    
    return 0;
}
