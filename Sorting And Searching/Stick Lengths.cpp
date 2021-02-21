#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);
	int p[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}
	sort(p, p + n);
	int target;
	if (n % 2) {
		target = p[n / 2];
	} else { 
		target = (p[n / 2 - 1] + p[n / 2]) / 2;
	}
	
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += abs(p[i] - target);
	}
	printf("%lld\n", ans);
	
	return 0;
}