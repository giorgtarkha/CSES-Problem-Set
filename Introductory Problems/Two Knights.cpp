#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);
	for (long long i = 1; i <= n; i++) {
		long long cells = i * i;
		long long ways = cells * (cells - 1) / 2 - (i > 2 ? 4 * (i - 1) * (i - 2) : 0);
		printf("%lld\n", ways);
	}
	
	return 0;
}