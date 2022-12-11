
 #include<iostream>
 
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        int m;
        std::cin >> n >> m;
        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < m; j += 1) {
                if (i % 4 == 0 || i % 4 == 3)
                {
                    if (j % 4 == 0 || j % 4 == 3)
                        std::cout << 1 << " ";
                    else
                        std::cout << 0 << " ";
                }
                else
                {
                    if (j % 4 == 0 || j % 4 == 3)
                        std::cout << 0 << " ";
                    else
                        std::cout << 1 << " ";
                }
            }
            std::cout << std::endl;
        }
    }
}
