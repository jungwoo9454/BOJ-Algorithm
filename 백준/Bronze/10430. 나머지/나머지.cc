#include <stdio.h>

int main(void)
{
    int A,B,C;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    printf("%d\n",(A+B)%C);
    printf("%d\n",((A%C) + (B%C))%C);
    printf("%d\n",(A*B)%C);
    printf("%d\n",((A%C) * (B%C))%C);
    return 0;
}
