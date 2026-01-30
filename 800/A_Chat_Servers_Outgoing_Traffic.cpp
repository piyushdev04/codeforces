#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string line;
	set<string> chat;
	long long totalTraffic = 0;

	while (getline(cin, line)) {
		if (line.empty()) continue;

		if (line[0] == '+') {
			// Add user
			string name = line.substr(1);
			chat.insert(name);
		}
		else if (line[0] == '-') {
			// Remove user
			string name = line.substr(1);
			chat.erase(name);
		}
		else {
			// Send message
			int colonPos = line.find(':');
			string sender = line.substr(0, colonPos);
			string message = line.substr(colonPos + 1);

			int messageLength = message.length();
			int peopleCount = chat.size();

			totalTraffic += 1LL * messageLength * peopleCount;
		}
	}
	cout << totalTraffic << "\n";
	return 0;
}
