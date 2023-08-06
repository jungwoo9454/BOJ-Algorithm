#include <stdio.h>

int main(void)
{
    long double a, b;
    scanf("%19Lf",&a);
    scanf("%19Lf",&b);
    
    printf("%.19Lf",a/b);
    return 0;
}
