//1678a
#include <iostream>
#include <vector>

int main(){
    int t = 0;
    std::cin >> t;
    while (t--){
        std::vector <int> a;
        int n = 0; std::cin >> n;
        int k_0 = 0;
        int k_par = 0;
        int k_ne0 = 0;
        for (int j = 0; j < n; j++){
            int tek;
            std::cin >> tek;
            a.push_back(tek);
            if (tek == 0){
                k_0 = 1;
            } else {
                k_ne0++;
            } for (int z = 0; z < j; z++){
                if (a[z] == tek){
                    k_par = 1;
                    break;
                }
            }
        }
        if (k_0 == 1){
            std::cout << k_ne0;
        } else {
            if (k_par == 1){
                std::cout << k_ne0;
            } else {
                std::cout << k_ne0 + 1;
            }
        } std::cout << '\n';
    }
}
