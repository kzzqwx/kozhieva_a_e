#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main(){
    int n = 0;
    std::cin >> n;
    std::vector<int> num(200001, -1); // here we count time which canteen with number num was not visited
    for (int i = 0; i < n; i++){
        int tmp = 0;
        std::cin >> tmp;
        num[tmp] = n - i - 1;
        // num[number of canteen] = all canteens - time in which it was visited - 1 (+- 1 rule)
        // so for the input data 5
        //1 3 2 1 2 num = [-1, 1, 0, 3] zero element doesn't count as we don't have canteen with number 0

    } 
    std::cout << std::distance(num.begin(), std::max_element(num.begin(), num.end()));
}
