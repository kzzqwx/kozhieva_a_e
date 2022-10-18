#include <iostream>
#include <vector>

int main(){
    int t(0);
    std::cin >> t;
    while (t--){
        int n(0);
        std::cin >> n;
        std::vector<int> a(n);
        for (int i(0); i < n; ++i){
            int tek(0);
            std::cin >> tek;
            a[i] = tek;
        }
        int ind(0);
        for (int j(0); j < n; j++){
            if (a[j] != 0){
                ind = j;
            } else {
                break;
            }
        }
        int ind2(0);
        for (int z(n - 1); z > 0; --z){
            if (a[z] != 0){
                ind2 = z;
            } else {
                break;
            }
        }
        if (ind2 - ind >= 0){
            std::cout << ind2 - ind << '\n';
        } else {
            std::cout << 0 << '\n';
        }
    }
}
