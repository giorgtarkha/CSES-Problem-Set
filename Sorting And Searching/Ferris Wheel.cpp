#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, x;
	scanf("%d %d", &n, &x);
	int p[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}
	
	sort(p, p + n);
	int left_index = 0, right_index = n - 1, ans = 0;
	while (left_index < right_index) {
		if (p[left_index] + p[right_index] <= x) {
			left_index++;
			right_index--;
			ans++;
		} else {
			right_index--;
			ans++;
		}
	}
	
	if (left_index == right_index) {
		ans++;
	}
	
	printf("%d\n", ans);
	
	return 0;
}