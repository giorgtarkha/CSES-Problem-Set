#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, x;
	scanf("%d %d", &n, &x);
	int coins[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &coins[i]);
	}
	
	int dp[x + 1];
	for (int i = 0; i <= x; i++) {
		dp[i] = -1;
	}
	dp[0] = 0;
	
	for (int i = 0; i <= x; i++) {
		for (int j = 0; j < n; j++) {
			if (i - coins[j] >= 0 && dp[i - coins[j]] != -1) {
				if (dp[i] == -1) {
					dp[i] = dp[i - coins[j]] + 1;
				} else {
					dp[i] = min(dp[i], dp[i - coins[j]] + 1);
				}
			}
		}
	}
	printf("%d\n", dp[x]);
	
	return 0;
}