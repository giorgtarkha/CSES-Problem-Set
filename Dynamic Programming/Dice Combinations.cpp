#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main() {
	
	int n;
	scanf("%d", &n);
	long long dp[n + 1];
	for (int i = 0; i <= n; i++) {
		dp[i] = 0;
	}
	
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 6; j++) {
			if (i - j >= 0) {
				dp[i] += dp[i - j];
			}
		}
		dp[i] %= MOD;
	}
	printf("%lld\n", dp[n]);
	
	return 0;
}