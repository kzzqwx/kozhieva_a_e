#include <iostream>
#include <cmath>

int main(){
    int a = 0; //num of details on the first day
    std::cin >> a;
    int m = 0;
    std::cin >> m;
    int power = 0;
    bool flag = false;
    for (int k = 0; k < 30; k += 1){
        power = pow(2, k);
        if (a * power % m == 0){
            flag = true;
            break;
        } else {
            flag = false;
        }
    } if (flag == true){
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}
