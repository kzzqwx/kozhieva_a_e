#include <iostream>
int main(){
    int t; std::cin >> t; //tests
    int n, k, r, c;
    // n - n x n    k   r;c - coordinates of compulsory X
    while (t--){
        std::cin >> n >> k >> r >> c;
        r--; c--;
        for (int i(0); i < n; i++){
            for (int j(0); j < n; j++){
                if ((i + j) % k == (r + c) % k){
                    std::cout << 'X';
                } else {
                    std::cout << '.';
                }
            } std::cout<< std::endl;
        }
    }
}
