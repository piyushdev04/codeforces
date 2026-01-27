#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> problems(n), prep(m);
	for (int i = 0; i < n; i++) cin >> problems[i];
	for (int i = 0; i < m; i++) cin >> prep[i];

	int i = 0, j = 0, solved = 0;

	while (i < n && j < m) {
		if (prep[j] >= problems[i]) {
			solved++;
			i++;
			j++;
		} else {
			j++;
		}
	}

	cout << n - solved << "\n";
	return 0;
}
