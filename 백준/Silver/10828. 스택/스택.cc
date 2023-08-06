#include <stdio.h>
#include <string.h>
#define D_LENGTH 100000

int stack[D_LENGTH] = {0,};
int length = 0;

void PrintArray()
{
    for(int i=0;i<D_LENGTH;i++)
    {
        printf("%d\t", stack[i]);
    }
}

int main()
{
    int count = 0;
    scanf("%d", &count);
    
    for(int i=0;i<count;i++)
    {
        char command[6];
        scanf("%s", command);
        
        if(strcmp("push", command) == 0)
        {
            int input = 0;
            scanf("%d", &input);
            stack[length] = input;
            length++;
            
        }else if(strcmp(command, "pop") == 0)
        {
            if(length > 0)
            {
                length--;
                printf("%d", stack[length]);
            }else{
                printf("-1");
            }
            printf("\n");
        }
        else if(strcmp(command, "size") == 0)
        {
            printf("%d\n", length);
        }
        else if(strcmp(command, "empty") == 0)
        {
            printf("%d\n", length == 0 ? 1 : 0);
        }
        else if(strcmp(command, "top") == 0)
        {
            if(length == 0)
                printf("-1");
            else
            {
                printf("%d", stack[length-1]);
            }
            
            printf("\n");
        }
    }
    
    
    
    return 0;
}
