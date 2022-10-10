#include <iostream>
int main(){
    int t(0); // number of tests
    std::cin >> t;
    int n(0); // length of array
    int ans(0);
    int tek(0); // current element of array
    while (t--){
        std::cin >> n;
        std::cin >> ans;
        for (int i(2); i <= n; i++){
            std::cin >> tek;
            ans &= tek;
        }
        std::cout << ans << std::endl;
    }
}
