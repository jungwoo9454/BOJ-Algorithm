#include <iostream>
#include <list>

using namespace std;

int main() {
    int n;
    int k;
    
    int coins[10];
    
    int count = 0;

    scanf("%d", &n);
    scanf("%d", &k);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d", &coins[i]);
    }
    
    while (true) {
        for(int i=n-1;i>=0;i--)
        {
            if(k - coins[i] >= 0)
            {
                count++;
                k -= coins[i];
                break;
            }
        }
        
        if(k <= 0)
            break;
    }
    printf("%d", count);
    return 0;
}

