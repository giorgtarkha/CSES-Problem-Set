#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main() {
	
	int n;
	scanf("%d", &n);
	long long ans = 1;
	while (n) {
		ans *= 2;
		ans %= MOD;
		n--;
	}
	printf("%lld\n", ans);
	
	return 0;
}