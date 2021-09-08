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
	// Consider each balloon color separately. For some color c, we 
	// can only assign all balloons of this color to Kefa's friends if c ≤ k. 
	// Because otherwise, by pigeonhole principle, at least one of the 
	// friends will end up with at least two balloons of the same color.
	bool checker = true;
	for (int i = 0; i < (int) counter.size(); i++) {
		if (counter[i] > k) {
			checker = false;
			break;
		}
	}
	cout << (checker ? "YES" : "NO") << '\n';
	return 0;
}
