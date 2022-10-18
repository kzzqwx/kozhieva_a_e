#include <iostream>
#include <string>
#include <algorithm>
//указатели надо применять
//yflj ljhf,jnfnm
int main(){
    int t(0);
    std::cin >> t;
    while (t--){
        std::string s("");
        char c;
        int n(0);
        int ans(0);
        std::cin >> n >> c >> s;
        if (c == 'g'){
            std::cout << 0 << '\n';
        }
        s = s + s;
        for (int i(0); i < n; ++i){
            if (s[i] == 'g'){
                continue;
            } else if (s[i] == c){
                for (int j(i + 1);j < n; ++j){
                    if (s[j] == 'g'){
                        ans = std::max(ans, j - i);
                        break;
                    }
                }
            }
        } std::cout << ans << '\n';
        
    }
}
