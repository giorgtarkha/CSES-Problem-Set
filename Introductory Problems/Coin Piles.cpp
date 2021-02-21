#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (!a && !b) {
			printf("YES\n");
			continue;
		}
		if (a < 2 && b < 2) {
			printf("NO\n");
			continue;
		}
		printf(max(a, b) <= 2 * min(a, b) && (a + b) % 3 == 0 ? "YES\n" : "NO\n");
	}
	
	return 0;
}