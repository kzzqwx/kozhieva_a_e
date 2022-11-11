#include <iostream>
int main()
{
  int t; // number of tests
  std::cin >> t;
  while(t--){
    int n, x; // n - number of rounds, x - next rounds
    std::cin>> n>> x;
    bool a[205] = {0};
    for (int i(0); i < n; i++){
      int tek; 
      std::cin >> tek; 
      a[tek] = 1;
    } int v;
    for (v = 1; x > 0 || a[v]; v++){
      if (a[v] == 0){
          x--;}
          
  
} std::cout << v - 1  <<std::endl;
}
return 0;
}
