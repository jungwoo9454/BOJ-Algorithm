#include <iostream>

int main() {
    int money;
    std::cin >> money;
    int n = 1000 - money;
    int count = 0;
    int coins[] = {500,100,50,10, 5, 1};
    for (int i = 0; i < 6; i++) {
        count += n / coins[i];
        n %= coins[i];
    }
    std::cout << count << std::endl;
    return 0;
}
