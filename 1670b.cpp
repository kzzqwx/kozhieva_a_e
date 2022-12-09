#include <iostream>
#include <set>

int main() {

    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int t;
    int a;
    int n;
    int i;
    int max = 0;
    std::string s;
    char tmp;
    std::cin >> t;

    while (t--) {
        std::cin >> a >> s >> n;
        std::set<char> alph;
        int k = 0;
        max = 0;
        while (n--) {
            std::cin >> tmp;
            alph.insert(tmp);
        }

        for (i = 0; i < s.size(); i++) {
            if (alph.count(s[i])) {
                k = i - k;
                if (max < k) {
                    max = k;
                }
                k = i;
            }

        }

        std::cout << max << '\n';
    }
    return 0;
}
