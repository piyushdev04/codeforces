#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> h(n);
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}

	int maxHeight = -1, minHeight = 101;
	int maxIndex = 0, minIndex = 0;

	// leftmost max
	for (int i = 0; i < n; i++) {
		if (h[i] > maxHeight) {
			maxHeight = h[i];
			maxIndex = i;
		}
	}

	// rightmost min
	for (int i = 0; i < n; i++) {
		if (h[i] <= minHeight) {
			minHeight = h[i];
			minIndex = i;
		}
	}

	int ans = maxIndex + (n - 1 - minIndex);

	if (maxIndex > minIndex) {
		ans--;
	}

	cout << ans << "\n";
	return 0;
}
