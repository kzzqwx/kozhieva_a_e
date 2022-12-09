
#include <iostream>
#include <string>
int main() {
	int t;
	std::cin >> t;
	for (int i(0); i < t; i++) {
		int n(0);
		int m(0);
		std::cin >> n;
		std::cin >> m;
		int l = 100;
		int hl = 0;
		int h = 1000;
		std::string x;
		for (int s(0); s < n; s++) {
			std::cin >> x;
			for (int k = 0; k < m; k += 1) {
				if (x[k] == 'R') {
					if (k < l) {
						l = k;
						hl = s;
					}
					if (n < h) {
						h = s;
					}
				}
			}
		}
		if (hl == h) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
 
	}
	return 0;
}
