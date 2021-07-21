// 1436. ¿µÈ­°¨µ¶ ¼ò
#include <iostream>
#include <string>

using namespace std;
string endNum = "666";

string count(int n) {
	int countNum = 0;
	string num;
	for (int i = 0; 0 < 10000; i++) {
		num = to_string(i);
		if (num.find(endNum) != string::npos) {
			countNum++;
			if (countNum == n)
				break;
		}
	}

	return num;
}

int main() {
	int n;

	cin >> n;

	cout << count(n) << '\n';

}