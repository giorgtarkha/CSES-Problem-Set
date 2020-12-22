#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int b[m];
	for (int i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}
	
	sort(a, a + n);
	sort(b, b + m);
	
	int a_index = n - 1, b_index = m - 1, ans = 0;
	while (a_index >= 0 && b_index >= 0) {
		if (abs(a[a_index] - b[b_index]) <= k) {
			b_index--;
			a_index--;
			ans++;
		} else {
			if (a[a_index] < b[b_index]) {
				b_index--;
			} else {
				a_index--;
			}
		}
	}
	printf("%d\n", ans);
	
	return 0;
}