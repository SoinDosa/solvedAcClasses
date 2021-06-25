// 1152. 단어의 개수
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int count = 0;

	getline(cin, str);
	if (str.empty()) {
		cout << count;
		return 0;
	}

	count = 1;
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == ' ')
			count++;
	}

	if (str[0] == ' ')
		count--;
	if (str[str.length() - 1] == ' ')
		count--;

	cout << count;

	return 0;
}