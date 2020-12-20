#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);
	int dp[n + 1] = {0};
	for (int i = 1; i <= n; i++) {
		if (i >= 10) {
			dp[i] = -1;
		} else {
			dp[i] = 1;
		}
	}
	for (int i = 10; i <= n; i++) {
		int x = i;
		while (x) {
			int digit = x % 10;
			if (digit) {
				if (dp[i] == -1) {
					dp[i] = dp[i - digit] + 1;
				} else {
					dp[i] = min(dp[i - digit] + 1, dp[i]);
				}
			}
			x /= 10;
		}
	}
	
	printf("%d\n", dp[n]);
	return 0;
}