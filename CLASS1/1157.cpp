// 1157. 단어공부
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	const string eng = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?";
	int countArr[26] = { 0, };
	int max = 0, idx = 0;

	cin >> str;
	for (int i = 0; i < str.length(); ++i) {
		str[i] = toupper(str[i]);
		countArr[eng.find(str[i])]++;
	}

	for (int i = 0; i < sizeof(countArr) / sizeof(int); ++i) {
		if (countArr[i] == 0)
			continue;
		if (max == countArr[i]) {
			idx = 26;
			continue;
		}
		if (max < countArr[i]) {
			max = countArr[i];
			idx = i;
		}
	}
	cout << eng[idx];
	return 0;
}