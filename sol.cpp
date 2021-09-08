#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<int> counter(26, 0);
	for (int i = 0; i < n; i++) {
		counter[s[i] - 'a']++;
	}
	// check if we cannot distribute a color to 'k' friends
	bool checker = true;
	for (int i = 0; i < (int) counter.size(); i++) {
		if (counter[i] - k > 0) {
			checker = false;
			break;
		}
	}
	cout << (checker ? "YES" : "NO") << '\n';
	return 0;
}
