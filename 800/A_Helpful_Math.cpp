#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	vector<char> nums;

	// extract numbers
	for (char c : s) {
		if (c != '+') {
			nums.push_back(c);
		}
	}

	// sort numbers
	sort(nums.begin(), nums.end());

	for (size_t i = 0; i < nums.size(); i++) {
		cout << nums[i];
		if (i + 1 < nums.size())
			cout << "+";
	}

	cout << "\n";
	return 0;
}
