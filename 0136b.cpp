#include <iostream>
/*
std::vector <char> chiselki = {'0', '1', '3'}; // possible digits of 3 counting system
std::string troika(int x){
    std::string tri = "";
    while (x > 0){
        tri = chiselki[x % 3] + tri;
        x /= 3;
    }
    return tri;
}

int main(){
    int a(0);
    int c(0);
    std::cin >> a >> c;
    std::string sa = troika(a);
    std::string sc = troika(c);
    if (sa.size() > sc.size()){
        sc.insert(0, sc.size() - sa.size(), '0');
    } else {
        sa.insert(0, sa.size() - sc.size(), '0');
    }
    
}
*/

int main(){
    
    int a(0);
    int c(0);
    int b(0); // answer
    
    std::cin >> a >> c;
    
    int power(1); // power to turn into decimal from ternar
    
    for (int i(0); a || c; ++i){
        // we should substract every digit and take it bu modulo 3
        // to convert to decimal we use "power" and multiple every result of substraction
        // nota bene : we add 3 just in case we get negative number in (c % 3) - (a % 3)
        //             it doesn't change residue but we are sure that result is positive
        b += ((c % 3) - (a % 3) + 3) % 3 * power;
        a /= 3;
        c /= 3;
        power *= 3;
    }
    std :: cout << b;
}
