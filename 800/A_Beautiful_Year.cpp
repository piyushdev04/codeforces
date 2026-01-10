#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int year;
	cin >> year;

	while (true) {
		year++;
		string s = to_string(year);

		set<char> digits;
		for (char c : s) {
			digits.insert(c);
		}

		if (digits.size() == 4) {
			cout << year << "\n";
			break;
		}
	}
	return 0;
}
