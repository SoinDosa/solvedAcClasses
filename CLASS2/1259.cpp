// 1259. Æç¸°µå·Ò¼ö
#include <iostream>
#include <string>

using namespace std;

int main() {
	string number;


	while (number != "0") {
		int count = 0;
		cin >> number;
		if (number == "0")
			break;

		for (int i = 0; i < number.length() / 2; ++i) {
			if (number[i] == number[number.length() - i - 1]) {
				count++;
			}
		}

		if (count == number.length() / 2)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}

	return 0;
}