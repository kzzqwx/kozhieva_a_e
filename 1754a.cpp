#include <iostream>
#include <string>

int main(){
    int t = 0;
    std::cin >> t;
    while (t--){
        int n = 0;
        std::cin >> n;
        std::string s = "";
        std::cin >> s;
        int counter = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == 'Q'){
                counter++;
            } else {
                counter--;
                if (counter < 0){
                    counter = 0;
                }
            }
            
        } if (counter == 0){
            std::cout << "Yes" << '\n';
        } else {
            std::cout << "No" << '\n';
        }
    }
}
