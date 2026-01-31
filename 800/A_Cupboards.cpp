#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int leftOpen = 0, leftClosed = 0;
	int rightOpen = 0, rightClosed = 0;

	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;

		if (l == 1) leftOpen++;
		else leftClosed++;

		if (r == 1) rightOpen++;
		else rightClosed++;
	}

	int moves = min(leftOpen, leftClosed) + min(rightOpen, rightClosed);
	cout << moves << "\n";

	return 0;
}
