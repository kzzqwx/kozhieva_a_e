#include <iostream>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--){
        int k0 = 0;
        for (int i = 0; i < 4; i++){
            int tmp = 0;
            std::cin >> tmp;
            if (tmp == 0) k0++;
        } if (k0 == 4) {std::cout << 0 << "\n";}
        else if (k0 == 0) {
            std::cout << 2 << "\n";
        } else
            std::cout << 1 << "\n";

    }
}
