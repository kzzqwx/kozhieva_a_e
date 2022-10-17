#include <iostream>
#include <vector>
int main(){
    int n(0);
    std::cin >> n;
    int tek(0);
    std::vector<int> a(n);
    for (int i(1); i <= n; ++i){
        std::cin >> tek;
        a[tek] = i;
    }
    for (int i(1); i <= n; ++i){
        std::cout << a[i] << " ";
    }
}
