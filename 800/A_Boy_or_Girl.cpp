#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int freq[26] = {0};

	for (char c : s) {
		freq[c - 'a'] = 1;
	}

	int distinct = 0;
	for (int i = 0; i < 26; i++) {
		if (freq[i] == 1) {
			distinct++;
		}
	}

	if (distinct % 2 == 0)
		cout << "CHAT WITH HER!\n";
	else
		cout << "IGNORE HIM!\n";

	return 0;
}
