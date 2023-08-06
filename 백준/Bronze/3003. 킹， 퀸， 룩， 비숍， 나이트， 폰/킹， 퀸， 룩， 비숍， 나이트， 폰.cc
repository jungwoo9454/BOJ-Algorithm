#include <stdio.h>

int main(void)
{
    int king;
    int queen;
    int look;
    int bishop;
    int knight;
    int phone;
    
    scanf("%d", &king);
    scanf("%d", &queen);
    scanf("%d", &look);
    scanf("%d", &bishop);
    scanf("%d", &knight);
    scanf("%d", &phone);
    
    printf("%d %d %d %d %d %d",1-king,1-queen,2-look,2-bishop,2-knight,8-phone);
    return 0;
}
