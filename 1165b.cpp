#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n = 0;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());

    int p = 1;
    for (int i = 0; i < n; i++){
        if (a[i] >= p) p++;
    }
    std::cout << p - 1 << '\n';
}
