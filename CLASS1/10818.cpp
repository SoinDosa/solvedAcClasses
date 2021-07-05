// 10818. 최소, 최대
#include <iostream>
using namespace std;

int main() {
	int n, num, max = -1000001, min = 1000001;

	do {
		cin >> n;
	} while (n < 1 || n > 1000000);

	for (int i = 0; i < n; ++i) {
		do {
			cin >> num;
		} while (num < -1000000 || num > 1000000);
		if (num >= max)
			max = num;
		
		if (num <= min)
			min = num;
	}

	cout << min << " " << max << '\n';

	return 0;
}