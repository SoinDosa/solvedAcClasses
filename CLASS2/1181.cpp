// 1181. 단어 정렬
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string s1, string s2) {
	if (s1.size() == s2.size()) {
		return s1 < s2; // 사이즈가 같다면 string 오름차순
	}
	else {
		return s1.size() < s2.size(); // 그렇지 않다면 크기 오름차순
	}
}

int main() {
	vector<string> vec;
	string temp;
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		string word;
		cin >> word;
		vec.push_back(word);
	}

	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < n; ++i) {
		if (temp == vec[i])
			continue;

		cout << vec[i] << '\n';
		temp = vec[i];
	}

}