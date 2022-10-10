#include <iostream>
#include <cmath>
int main(){
    int x = 0, y = 0;
    int a[5][5];
    for (int i(0); i < 5; i++){
        for (int j(0); j<5; j++){
            std::cin >> a[i][j];
            if (a[i][j] == 1){
                x = i;
                y = j;
            }
        }
    } int ans = 0;
    ans = abs(x - 2) + abs(y - 2);
    std::cout << ans;
}

