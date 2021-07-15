// 1181. �ܾ� ����
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string s1, string s2) {
	if (s1.size() == s2.size()) {
		return s1 < s2; // ����� ���ٸ� string ��������
	}
	else {
		return s1.size() < s2.size(); // �׷��� �ʴٸ� ũ�� ��������
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