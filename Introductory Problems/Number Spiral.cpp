#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	scanf("%d", &t);
	while (t--) {
		long long y, x;
		scanf("%lld %lld", &y, &x);
		long long border = max(y, x);
		long long min_v = (border - 1) * (border - 1);
		if (border % 2) {
			if (border == y) {
				printf("%lld\n", min_v + x);
			} else {
				printf("%lld\n", min_v + 2 * border - y);
			}
		} else {
			if (border == x) {
				printf("%lld\n", min_v + y);
			} else {
				printf("%lld\n", min_v + 2 * border - x);
			}
		}
	}
	
	return 0;
}