#include <iostream>
#include <vector>
#include <string>
 
int main() {
    int t = 0;
    int a = 0;
    int b = 0;
    char symbol = ' ';
    int sum = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::vector <char> s;
        std::cin >> a >> b;
        bool tr = 1;
        sum = a + b;
        for (int j = 0; j < sum; j++) {
            std::cin >> symbol;
            s.push_back(symbol);
        }
        for (int k = 0; k < sum; k++) {
            if (s[k] != '?') {
                if (s[sum - k - 1] != '?') {
                    tr&= s[k] == s[sum - k -1];
                } else {
                    s[sum - k - 1] = s[k];
                }
            }
        }
        for (int l = 0; l < sum; l++) {
            if (s[l] == '0') {
                a--;
            }
            else if (s[l] == '1') {
                b--;
            }
        }
        for (int m = 0; m < sum - m - 1; m++) {
            if (s[m] == '?') {
                if (a > 1) {
                    s[m] = s[sum-m-1] = '0';
                    a -= 2;
                } else {
                    s[m] = s[sum - m - 1] = '1';
                    b -=2;
                }
            }
        }
        if (tr == 0 || a < 0 || b < 0) {
            std::cout << "-1\n";
        } else {
            if (a > 0) {
                s[(sum - 1) / 2] = '0';
            } else if (b > 0) {
                s[(sum - 1) / 2] = '1';
            }
            for (int n = 0; n < sum; n++) {
                std::cout << s[n];
            }
            std::cout << std::endl;
        }
    }
}
