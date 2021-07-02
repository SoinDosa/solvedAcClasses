// 2439. 별 찍기 - 2
#include <iostream>
using namespace std;

int main() {
	int n;
	do {
		cin >> n;
	} while (n < 1 || n > 100);

	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < n - i; ++j) {
			cout << " ";
		}
		for (int j = 0; j < i; ++j) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}