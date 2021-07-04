// 2884. 알람 시계
#include <iostream>
using namespace std;

int main() {
	int h, m;

	do {
		cin >> h;
	} while (h < 0 || h >23);

	do {
		cin >> m;
	} while (m < 0 || m > 59);

	if (m < 45) {
		if (h == 0) {
			h = 23;
		}
		else {
			h--;
		}
		m = 15+m;
	}
	else {
		m -= 45;
	}

	cout << h << " " << m << "\n";

	return 0;
}