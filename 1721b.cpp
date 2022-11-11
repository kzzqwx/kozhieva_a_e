#include <iostream>
#include <cmath>
 
int main(){
    int t; std::cin >> t; //t - num of tests
    while (t--){
        int n; std::cin >> n; // координата строки финиша
        int m; std::cin >>m; // координата столбца финиша
        int sx, sy; std::cin >> sx >> sy; // координаты лазера
        int d; std::cin >> d; // "опасное" расстояние
        if (fmin(sx - 1, m - sy) <= d && fmin(n - sx, sy - 1) <= d){
            std::cout << -1 << std::endl;
        } else{
            std::cout << n + m - 2 << std::endl;
        }
    }
}
