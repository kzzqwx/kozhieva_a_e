
#include <iostream>
#include <array>

int main(){
    int t = 0;
    std::cin >> t;
    while (t--){
        const int n = 8;
        std::array <std::array <bool, n>, n > a;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                char tmp = ' ';
                std::cin >> tmp;
                if (tmp == '#') a[i][j] = true;
                else{ a[i][j] = false; }
            }
        }
        for (int i = 1; i < n - 1; i++){
            for (int j = 1; j < n - 1; j++){
                if (a[i][j] && a[i - 1][j - 1] && a[i - 1][j + 1] && a[i + 1][j - 1]
                && a[i + 1][j + 1]){
                    std::cout << i + 1 << ' ' << j + 1 << '\n';
                }
            }
        }
    }
}
