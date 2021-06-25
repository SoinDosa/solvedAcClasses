// 1330. 두 수 비교하기
#include <iostream>
using namespace std;

int main() {
	int a, b;
	
	while (1) {
		cin >> a >> b;
		if (!(a > 10000 || a < -10000 || b > 10000 || b < -10000))
			break;
	}
	if (a > b)
		cout << ">";
	else if (a < b)
		cout << "<";
	else
		cout << "==";

	return 0;
}