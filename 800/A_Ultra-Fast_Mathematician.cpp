#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	string c = "";
	for (size_t i = 0; i < a.size(); i++) {
		if (a[i] == b[i])
			c += '0';
		else
			c += '1';
	}
	cout << c << "\n";
	return 0;
}
