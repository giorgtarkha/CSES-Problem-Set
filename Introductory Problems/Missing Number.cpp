#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long n;
	scanf("%lld", &n);
	long long sum = 0;
	for (int i = 0; i < n - 1; i++) {
		int x;
		scanf("%d", &x);
		sum += x;
	}
	printf("%lld\n", n * (n + 1) / 2 - sum);
	
	return 0;
}