#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int Y, W;
	cin >> Y >> W;

	int mx = max(Y, W);
	int favorable = 6 - mx + 1;
	
	if (favorable < 0) favorable = 0;

	int g = __gcd(favorable, 6);
	favorable /= g;
	int total = 6 / g;
	
	cout << favorable << "/" << total << "\n";

	return 0;
}
