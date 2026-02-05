#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<bool> arrived(n + 1, false);
	int need = n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arrived[x] = true;

		while (need >= 1 && arrived[need]) {
			cout << need << " ";
			need--;
		}
		cout << "\n";
	}
	return 0;
}
