#include <iostream>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--){
        int n = 0;
        std::cin >> n;
        std::vector <int> a(n);
        std::vector <int> b(n);
        std::vector <int> time(n);
        for (int i = 0; i < n; i++){
            std::cin >> a[i] >> b[i];
        }
        for (int i = 0; i < n; i++){
            std::cin >> time[i];
        }
        int a_time = 0;
        int d = 0;
        for (int i = 0; i < n; i++){
            a_time += (a[i] - d + time[i]);
            int stop = (b[i] - a[i] + 1) / 2;
            if (i < n - 1){
                a_time += stop;
            }
            if (a_time < b[i] && i < n - 1){
                a_time = b[i];
            } d = b[i];
        } std::cout << a_time << "\n";
    }
}
