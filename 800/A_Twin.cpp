#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> coins(n);
	int total = 0;

	for (int i = 0; i < n; i++) {
		cin >> coins[i];
		total += coins[i];
	}

	// sort in descending order
	sort(coins.begin(), coins.end(), greater<int>());

	int my_sum = 0;
	int count = 0;

	for (int coin : coins) {
		my_sum += coin;
		count++;
		if (my_sum > total - my_sum) {
			break;
		}
	}

	cout << count << "\n";
	return 0;
}
