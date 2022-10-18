#include <iostream>
#include <string>
#include <cmath>
int main(){
    int t(0);
    int n(0);
    std::cin >> t;
    while (t--){
        std::cin >> n;
        std::string s;
        int x1 = -1; int y1 = -1;
        int x2 = -1; int y2 = -1;
        int x3 = -1; int y3 = -1;
        int x4 = -1; int y4 = -1;
        for (int i(0); i < n; i++){
            std::cin >> s;
            for (int j(0); j < n; j++){
                if (s[j] == '*'){
                    x2 = x1; x1 = i;
                    y2 = y1; y1 = j;
                }
            }
        }
        if (x1 == x2){ // x1 and x2 are in the same column and to get rectangle
                       // we can put x3 and x4 righter or lefter for one.
            x3 = abs(x1 - 1); x4 = x3;
            y3 = y1; y4 = y2;
        } else if (y1 == y2){
            y3 = abs(y1 - 1); y4 = y3;
            x3 = x1; x4 = x2;
        } else {
            x3 = x1; y3 = y2;
            x4 = x2; y4 = y1;
        }
        for (int i(0); i < n; i++){
            for (int j(0); j < n; j++){
                if ((x1 == i) && (y1 == j)){
                    std::cout << '*';
                } else if ((x2 == i) && (y2 == j)){
                    std::cout << '*';
                } else if ((x3 == i) && (y3 == j)){
                    std::cout << '*';
                } else if ((x4 == i) && (y4 == j)){
                    std::cout << '*';
                } else {
                    std::cout << '.';
                }
                if (j == n - 1){
                    std::cout << std::endl;
                }
            }
        }
    }
}
