// 1654. 랜선 자르기
#include <iostream>
#include <vector>
using namespace std;

int main() {
	long k, n, result = 0;
	long long l = 1, m = 0, h = 0;
	long long input;
	vector<long long> arr;
	int count = 0;

	cin >> k >> n;
	for (int i = 0; i < k; i++)
	{
		cin >> input;
		arr.push_back(input);
		if (input > h)
			h = input;
	}

	while (l <= h) {
		m = (l + h) / 2;
		count = 0;
		for (int i = 0; i < k; i++)
		{
			count += arr[i] / m;
		}

		if (count < n) {
			h = m - 1;
		}
		else {
			if (result < m)
				result = m;
			l = m + 1;
		}
	}

	cout << result << endl;

	return 0;

}
