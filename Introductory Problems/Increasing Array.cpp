#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);
	long long ans = 0;
	int max_before = -1;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		if (max_before == -1) {
			max_before = x;
		}
		ans += max(0, max_before - x);
		max_before = max(max_before, x);
	}
	printf("%lld\n", ans);
	
	return 0;
}