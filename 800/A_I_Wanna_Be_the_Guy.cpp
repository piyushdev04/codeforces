#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<int> levels;

	int p;
	cin >> p;
	for (int i = 0; i < p; i++) {
		int x;
		cin >> x;
		levels.insert(x);
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		levels.insert(x);
	}

	if ((int)levels.size() == n)
		cout << "I become the guy.\n";
	else
		cout << "Oh, my keyboard!\n";

	return 0;
}
