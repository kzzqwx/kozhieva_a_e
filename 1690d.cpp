#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
 
int main() {
	int t;
    int n;
    int k;
    int cnt; 
    int m;
	std::cin >> t;
	for (int j = 0; j < t; j++) {
		std::cin >> n >> k;
		std::vector<char> a(n);
		std::vector<int> b(n + 1);
		cnt = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
			if (a[i] == 'B') cnt++;
			b[i + 1] = cnt;
		}
		m = 0;
		for (int i = 1; i <= n - k + 1; i++) {
			m = std::max(m, b[i + k - 1] - b[i - 1]);
		}
		std::cout << k - m << std::endl;
	}
	return 0;
}
