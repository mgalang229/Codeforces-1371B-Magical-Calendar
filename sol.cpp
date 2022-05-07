#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, r;
		cin >> n >> r;
		long long ans = 0;
		if (n <= r) {
			// n itself will only produce 1 distinct & valid shape
			n--;
			ans = (n * (n + 1)) / 2 + 1;
		} else {
			ans = (r * (r + 1)) / 2;
		}
		cout << ans << '\n';
	}
	return 0;
}
