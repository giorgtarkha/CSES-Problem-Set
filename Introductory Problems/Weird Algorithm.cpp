#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long n;
	scanf("%lld", &n);
	while (n != 1) {
		printf("%lld ", n);
		n = n % 2 ? 3 * n + 1 : n / 2;
	}
	printf("1\n");
	
	return 0;
}