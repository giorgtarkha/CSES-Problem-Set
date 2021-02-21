#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);
	long long ans = 1ll << 63, sum = 0;
	for (int i = 0; i < n; i++) {
		long long x;
		scanf("%lld", &x);
		sum += x;
		ans = max(ans, sum);
		if (sum < 0) {
			sum = 0;
		}
	}
	printf("%lld\n", ans);
	
	return 0;
}