//1675с
#include <iostream>
#include <string>

int main(){
    int t = 0;
    std::cin >> t;
    while (t--){
        std::string ans_of_fr ="";
        std::cin >> ans_of_fr;
        // можно заметить, что переход с 1 на 0 может произойти лишь один раз
        long length = ans_of_fr.size();
        int ans = 0;
        long ind_zero = length - 1;
        int ind_one = 0;
        // ind_zero - индекс первого нуля слева, если его нет то возьмем длину строки ответов друзей - 1
        // ind_one - индекс последней единицы
        for (int i = 0; i < length; ++i){
            if (ans_of_fr[i] == '0'){
                ind_zero = i;
                // количество подозреваемых = ind_zero - ind_one + 1
                ans = ind_zero - ind_one + 1;
                break;
            }
            else if (ans_of_fr[i] == '1'){
                ind_one = i;
                break;
                }
            if (ans != 0){
                break;
                }
            
        } if (ans == 0){
            ans = ind_zero - ind_one + 1;
        } std::cout << ans << std::endl;
    }
    
}
