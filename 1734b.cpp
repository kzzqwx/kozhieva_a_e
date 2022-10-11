//
//  1734b.cpp
//  codeforces
//
//  Created by Amina Kozhieva on 11.10.2022.
//

#include "1734b.hpp"
#include <iostream>

int main(){
    int t(0);
    std::cin >> t;
    while (t--){
        int n(0);
        std::cin >> n;
        for (int i(1); i <= n; i++){
            for (int j(1); j <= i; j++){
                std::cout << (j == 1 || j == i) << ' ';
            }
            std::cout << std::endl;
        }
    }
}
