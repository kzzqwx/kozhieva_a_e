#include <iostream>
#include <string>
int main(){
    int n(0);
    std::cin >> n;
    std::string s = "";
    std::cin >> s;
    int ans(0);
    int num_u(0);
    int num_r(0);
    if (s[0] == 'U'){
        num_u++;
    } else {
        num_r++;
    }
    for (int i(1); i < n; i++){
        if (s[i] == s[i - 1]){
            if (num_r == num_u){
                ans++;
            }
        } if (s[i] == 'U'){
            num_u++;
        } else {
            num_r++;
        }
    } std::cout << ans;
}
