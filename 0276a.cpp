#include <iostream>
#include <cmath>
int main(){
    int maxim = -10000000000, n, k, f, t;
    std::cin >> n >> k;
    //n - amount, k - time
    for (int i(0); i < n; i++){
        //f-pleasure, t- time for restaurant
        int p = 0;
        std::cin >> f >> t;
        if (t > k){
            p = f - (t - k);
            if (p > maxim){
                maxim = p;
            }
        } else {
            p = f;
            if (p > maxim){
                maxim = p;
            }
        }
    } std::cout << maxim;
}

