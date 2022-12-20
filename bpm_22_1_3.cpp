#include <iostream>
#include <string>



int main(){
    std::string alphabet = "qwrtypsdfghjklzxcvbm";
    std::string vowels = "aouie";
    std::string word = "";
    std::cin >> word;
    bool flag = false;
    const int alp_s = 21;
    if (word[word.size() - 1] == 'n'){
        for (int i = 0; i < word.size(); i++){
            for (int j = 0; j < alp_s; j++){
                if (word[i] == alphabet[j]){
                    for (int z = 0; z < 5; z++){
                        if (word[i + 1] == vowels[z]){
                            flag = true;
                        } else {
                            flag = false;
                            break;
                        }
                    }
                } if (word[i] == 'n'){
                    continue;
                }
            }

        }
    }
    else {
        std::cout << "no";
    }
    if (flag = true){
        std::cout << "yes";
    } else {
        std::cout << "no";
    }
}
