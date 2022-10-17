#include <iostream>
#include <cmath>
#include <vector>
int main(){
    int t(0); //tests
    std::cin >> t;
    while (t--){
        int n(0);
        int ans(1);
        std::cin >> n;
        std::vector<int> a(n + 1);
        for (int i(0); i < n; i++){
            int x(0);
            std::cin >> x;
            a[i] = x;
        }
        if (a[0] == 1){
            ans += 1;
        }
        for (int i(1); i < n; i++){
            if (a[i - 1] == 0 && a[i] == 0){
                ans = -100000000;
                
            } if (a[i] == 1 && a[i - 1] == 0){
                ans += 1;
            } if (a[i] == 1 && a[i - 1] == 1){
                ans += 5;
            }
        } if (ans > 0){
            std::cout << ans << '\n';
        } else{
            std::cout << -1 << '\n';
        }
        
    }
    
}
