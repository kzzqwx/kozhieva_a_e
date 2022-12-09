//
// Created by Amina Kozhieva on 09.12.2022.
//

#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 0;
        int k = 0;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        std::string r(k, '?');
        std::string ans = "YES";
        for (int i = 0; i < n; i += 1) {
            int x = i % k;
            if (r[x] == '?') {
                if (s[i] == '0') {
                    r[x] = '0';
                }
                if (s[i] == '1'){

                r[x] = '1';}
            }
            else {
                if (r[x] != s[i] && s[i] != '?') {
                    ans = "NO";
                    break;
                }
            }
        }
        int a = 0;
        int b = 0;
        for (int i = 0; i < k; i += 1) {
            if (r[i] == '0') {
                a += 1;
            }
            if (r[i] == '1') {
                b += 1;
            }
        }
        if (a > k / 2 || b > k / 2) ans = "NO";
        std::cout << ans << '\n';
    }

}