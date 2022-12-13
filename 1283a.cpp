#include <iostream>
#include <string>

int main(){
    int t = 0;
    std::cin >> t;
    int new_year = 1440;
    while (t--){
        int h = 0;
        int m = 0;
        std::cin >> h >> m;
        h *= 60;
        m += h;
        std::cout << new_year - m << "\n";
    }
}
