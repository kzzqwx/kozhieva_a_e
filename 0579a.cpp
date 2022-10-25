#include <iostream>

int main(){
    int x = 0;
    std::cin >> x;
    int k = 0;
    while (x != 0){
        k += x & 1;
        x >>= 1;
    }
    std::cout << k;
}
