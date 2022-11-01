#include <iostream>
#include <string>
int main(){
    int t = 0;
    std::cin >> t;
    while (t--){
        int n = 0;
        std::string s = "";
        std::cin >> n;
        std::cin >> s;
        s = s + "W";
        std::string ans = "yes";
        int red = 0;
        int blue = 0;
        for (int i = 0; i <= n; i++){
            if (s[i] == 'R'){
                red++;
            }
            else if (s[i] == 'B'){
                blue++;
            }
            else if (s[i] == 'W'){
                if ((red == 0 && blue != 0) || (red != 0 && blue == 0)){
                    ans = "no";
                    break;
                }
                red = 0;
                blue = 0;
            }
        }
        std::cout << ans << std::endl;
    }
    
}
