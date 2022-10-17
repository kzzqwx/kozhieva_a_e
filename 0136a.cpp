#include <iostream>
#include <vector>
int main(){
    int n(0);
    std::cin >> n;
    int tek(0);
    std::vector<int> a(n);
    for (int i(0); i < n; ++i){
        std::cin >> tek;
        a[tek - 1] = i + 1;
    }
    for (int i(0); i < n; ++i){
        std::cout << a[i] << " ";
    }
}
