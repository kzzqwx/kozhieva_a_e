#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    int maxim = std::min(a, b);
    int ans = 1;
    for (int i = 1; i <= maxim; i++){
        ans *= i;
    } std::cout << ans;
}
