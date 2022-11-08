#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n = 0;
    std::cin >> n;
    int ans = 0;
    std::vector<int> points(n);
    int thomas = 0;
    for (int j = 0; j < n; j++){
        int tmp = 0;
        for (int i = 0; i < 4; i++){
            std::cin >> tmp;
            points[j] += tmp;
        }
    }
    thomas = points[0];
    sort (points.begin(), points.end(),
          std::greater<int>());
    for (int i = 0; i < n; i++){
        if (points[i] == thomas){
            ans = i + 1;
            break;
        }
    } std::cout <<ans;
    }
    
