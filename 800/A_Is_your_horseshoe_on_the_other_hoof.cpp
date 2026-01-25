#include <bits/stdc++.h>
using namespace std;

int main() {
	int a1, a2, a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;

	set<int> s;
	s.insert(a1);
	s.insert(a2);
	s.insert(a3);
	s.insert(a4);

	cout << 4 - s.size() << "\n";
	return 0;
}
