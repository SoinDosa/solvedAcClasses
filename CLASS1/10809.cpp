//10809. 알파벳 찾기
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int arr[26] = { -1, };

	do {
		cin >> s;
	} while (s.length() > 100 || s.length() < 0);

	for (int i = 0; i < 26; ++i) {
		arr[i] = s.find(i + 'a');
	}

	for (int i = 0; i < 26; ++i) {
		cout << arr[i] << " ";
	}
	
	return 0;
}