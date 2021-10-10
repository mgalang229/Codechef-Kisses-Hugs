#include <bits/stdc++.h>

using namespace std;

const long long MOD = (long long) 1e9 + 7;

long long power(long long a, long long b) {
	// perform binary exponentation
	long long res = 1;
	while (b > 0) {
		if (b & 1) {
			res = (res * a) % MOD;
		}
		a = (a * a) % MOD;
		b >>= 1;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// watch the video tutorial link in this repository
		long long sum = (power(2, n / 2) - 2) % MOD;
		long long ans = (2 + 2 * sum + power(2, n / 2)) % MOD;
		if (n % 2 == 1) {
			ans = (ans + power(2, n / 2)) % MOD;
		}
		ans = (ans % MOD + MOD) % MOD;
		cout << ans << '\n';
	}
	return 0;
}
