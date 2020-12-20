#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main() {
	
	int n, x;
	scanf("%d %d", &n, &x);
	int coins[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &coins[i]);
	}
	
	long long dp[x + 1];
	for (int i = 0; i <= x; i++) {
		dp[i] = 0;
	}
	
	dp[0] = 1;
	for (int i = 0; i <= x; i++) {
		for (int j = 0; j < n; j++) {
			if (i - coins[j] >= 0 && dp[i - coins[j]] != -1) {
				dp[i] += dp[i - coins[j]];
			}
		}
		dp[i] %= MOD;
	}
	
	printf("%lld\n", dp[x]);
	
	return 0;
}