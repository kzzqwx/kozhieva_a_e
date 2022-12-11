#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int t = 0;
    std::cin >> t;
    while (t--){
        int n = 0;
        std::cin >> n;
        int c1 = 0;
        int c = 0;
        std::vector<int> v1(n);
        for (int i = 0; i < n; i++){
            std::cin >> v1[i];
            int a = v1[i];
            while (a % 2 == 0) {
                a = a / 2;
                c++;
            }
        }std::vector<int> v2;
        for (int i = 0; i < n; i++){
            c1 = 0;
            int k = i + 1;
            while (k % 2 == 0){
                k = k / 2;
                c1++;
            } v2.push_back(c1);
        } sort(v2.begin(), v2.end(), std::greater<int>());
        if (c >= n)
        {
            std::cout << 0 << std::endl;
            continue;
        }
        c1 = 0;
        for (auto i = v2.begin(); i != v2.end(); i++){
            c += *i;
            c1++;
            if (c >= n){
                std::cout << c1 << '\n';
                break;
            }
        } if (c < n){
            std::cout << -1 << '\n';
        }
    }
}
