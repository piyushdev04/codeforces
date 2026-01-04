#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t; // number of words
	
	while (t--) {
		string s;
		cin >> s;

		int len = s.length();

		if (len > 10) {
			cout << s[0] << len - 2 << s[len - 1] << "\n";
		} else {
			cout << s << "\n";
		}
	}
	return 0;
}
