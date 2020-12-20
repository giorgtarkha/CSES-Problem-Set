#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main() {
	
	int n;
	scanf("%d", &n);
	vector<string> grid(n);
	for (int i = 0; i < n; i++) {
		cin >> grid[i];
	}
	
	long long dp[n][n];
	dp[0][0] = grid[0][0] == '.' ? 1 : 0;
	for (int i = 1; i < n; i++) {
		dp[i][0] = (grid[i][0] == '.' ? dp[i - 1][0] : 0);
		dp[0][i] = (grid[0][i] == '.' ? dp[0][i - 1] : 0);
	}
	
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			dp[i][j] = 0;
			if (grid[i][j] == '.') {
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
			dp[i][j] %= MOD;
		}
	}
	printf("%lld\n", dp[n - 1][n - 1]);
	
	return 0;
}