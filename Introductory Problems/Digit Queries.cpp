#include <bits/stdc++.h>

using namespace std;

unsigned long long tpow(unsigned long long b) {
	unsigned long long res = 1;
	while (b--) {
		res *= 10;
	}
	return res;
}

int main() {
	
	int q;
	scanf("%d", &q);
	while (q--) {
		unsigned long long n;
		scanf("%llu", &n);
		int length = 0;
		for (int i = 0; i <= 18; i++) {
			unsigned long long mult = tpow(i) * (i + 1) * 9ull;
			length++;
			if (n >= mult) {
				n -= mult;
			} else {
				break;
			}
		}
		
		if (!n) {
			printf("9\n");
			continue;
		}
		n--;
		char digit = to_string(tpow(length - 1) + n / length)[n % length];
		printf("%c\n", digit);
	}
	
	return 0;
}