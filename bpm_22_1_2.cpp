
#include <iostream>
#include <cmath>
int main(){
    float x = 0;
    float y = 0;
    int summa = 0;
    int vsego = 0;
    while (true) {
        std::cin >> x >> y;
        vsego++;
        if ((x * x + y * y <= 4) && (y >= 2 - (x * x))) {
            summa++;
        }
    } std::cout << summa / vsego;
}
