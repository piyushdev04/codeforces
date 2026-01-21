#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	string combined = s1 + s2;

	sort(combined.begin(), combined.end());
	sort(s3.begin(), s3.end());

	if (combined == s3)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}
