#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);
	long long weights[n];
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%lld", &weights[i]);
		sum += weights[i];
	}
	
	long long ans = 1ll << 62;
	for (int i = 0; i < (1 << n); i++) {
		long long curr_sum = 0;
		for (int j = 0; j < n; j++) {
			if ((i >> j) & 1) {
				curr_sum += weights[j];
			}
		}
		ans = min(ans, abs(sum - 2 * curr_sum));
	}		
	printf("%lld\n", ans);
	
	return 0;
}