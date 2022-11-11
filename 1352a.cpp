#include <iostream>
#include <vector>
int main(){
    int t;
    std::cin >> t;
    while (t--){
        int n; std::cin >> n;
        std:: vector <int> ans;
        int power = 1;
        while (n > 0){
            if (n % 10 > 0) {
                    ans.push_back((n % 10) * power);
                }
                n /= 10;
                power *= 10;
            
        }
        std::cout << ans.size() << std::endl;
        int s = ans.size();
        for (int i(0); i < s; i++){
            std::cout << ans[i] << " ";
        } std:: cout << std::endl;
        }
 
}
