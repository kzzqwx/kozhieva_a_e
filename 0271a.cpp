#include <iostream>
int main(){
    int y = 0;
    std::cin >> y;
    for (y += 1; y <= 9999; y += 1){
        int s1 = y / 1000, s2 = (y - 1000 * s1) / 100;
        int s3 = (y - 1000 * s1 - 100 * s2) / 10;
        int s4 = y % 10;
        bool b = s1 != s2;
        b = b && s1 != s3;
        b = b && s1 != s4;
        b = b && s2 != s3;
        b = b && s2 != s4;
        b = b && s3 != s4;
        if (b == true){
            std::cout << y;
            break;
        }
    }
}
