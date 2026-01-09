#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> a(n);
	int total = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i];
	}

	// sort in descending order
	sort(a.begin(), a.end(), greater<int>());

	int my_sum = 0;
	int cnt = 0;

	for (int coin : a) {
		my_sum += coin;
		cnt++;
		if (my_sum > total - my_sum) {
			break;
		}
	}

	cout << cnt << "\n";
	return 0;
}
