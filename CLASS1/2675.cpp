// 2675. 문자열 반복
#include <iostream>
#include <string>
using namespace std;

int main() {
	int t, r;
	string str;

	do {
		cin >> t;
	} while (t < 1 || t > 1000);

	for (int i = 0; i < t; ++i) {
		do {
			cin >> r;
		} while (r < 1 || r > 8);
		do{ 
			cin >> str; 
		} while (str.length() < 1 || str.length() > 20);
		
		for (int j = 0; j < str.length(); ++j) {
			for (int k = 0; k < r; ++k) {
				cout << str[j];
			}
		}
		cout << '\n';
	}
	
	return 0;
}