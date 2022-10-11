//
//  1671a.cpp
//  codeforces
//
//  Created by Amina Kozhieva on 11.10.2022.
//

#include <iostream>
#include <string>
 
int main(){
    int t(0);
    std::cin >> t;
    while (t--){
        std::string s = "";
        std::cin >> s;
        long l(0);
        l = size(s);
        int k(1);
        bool flag = false;
        for (int i(0); i < l; ++i){
            if (s[i] == s[i + 1]){
                k += 1;
            }
            else{
                if (k > 1){
                    flag = true;
                    k = 1;
                }
                else{
                    flag = false;
                    k = 1;
                    break;
                }
            }
        } if (flag == true){
            std::cout << "YES" << std::endl;
        } else{
            std::cout << "NO" << std::endl;
        }
        
    }
    
    
}
