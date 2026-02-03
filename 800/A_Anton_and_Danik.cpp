#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	string s;
	cin >> s;

	int countA = 0, countD = 0;

	for (char c : s) {
		if (c == 'A') countA++;
		else countD++;
	}
	
	if (countA > countD)
		cout << "Anton\n";
	else if (countD > countA)
		cout << "Danik\n";
	else
		cout << "Friendship\n";
	
	return 0;
}
