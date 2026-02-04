#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> times(n);
	for (int i = 0; i < n; i++) {
		cin >> times[i];
	}

	int minTime = *min_element(times.begin(), times.end());
	int count = 0, position = -1;

	for (int i = 0; i < n; i++) {
		if (times[i] == minTime) {
			count++;
			position = i + 1;
		}
	}

	if (count > 1)
		cout << "Still Rozdil\n";
	else
		cout << position << "\n";

	return 0;
}
