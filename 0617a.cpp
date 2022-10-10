#include <iostream>
int main(){
    int x = 0;
    std::cin >> x;
    int counter = 0;
    if (x % 5 != 0){
        x = x - (x % 5);
        counter += 1;
    }
    counter += (x / 5);
    std::cout<<counter;
        
    
}
