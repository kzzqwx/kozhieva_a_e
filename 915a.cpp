//
//  915a.cpp
//  codeforces
//
//  Created by Amina Kozhieva on 11.10.2022.
//

#include <iostream>
#include <vector>
int main(){
   int n(0); // amount of buckets
   int k(0); // length of garden
   std::cin >> n >> k;
   int ans(100000);
   for (int i(0); i < n; ++i){
       int tek(0);
       std::cin >> tek;
       if ((k % tek == 0) && (k / tek < ans)){
           ans = k / tek;
       }
   } std::cout << ans;
}
