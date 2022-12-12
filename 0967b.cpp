#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    long long int n = 0;
    long long int a = 0; // added litres
    long long int  b = 0; // expected
    std::cin >> n >> a >> b;
    std::vector<int> holes(n - 1);
    long long int first = 0;
    std::cin >> first;
    int s = first;
    int ans = 0;
    for (int i = 0; i < n - 1; i++){
        std::cin >> holes[i];
        s += holes[i];
    } if (first * a >= s * b){
        std::cout << ans;
    } else{
        std::sort(holes.begin(), holes.end());
        std::reverse(holes.begin(), holes.end());
        for (int i = 0; i < n; i++){
            s -= holes[i];
            ans++;
            if (first * a >= s * b){
                std::cout << ans;
                break;
            }
        }
    }
}
