#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, x;
	scanf("%d %d", &n, &x);
	pair<long long, int> values[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &values[i].first);
		values[i].second = i;
	}
	sort(values, values + n);
	int left_index = 0, right_index = n - 1;
	while (left_index < right_index) {
		if (values[left_index].first + values[right_index].first == x) {
			int li = min(values[left_index].second, values[right_index].second) + 1,
			    ri = max(values[left_index].second, values[right_index].second) + 1;
			printf("%d %d\n", li, ri);
			return 0;
		} else if (values[left_index].first + values[right_index].first < x) {
			left_index++;
		} else {
			right_index--;
		}
	}
	printf("IMPOSSIBLE\n");
	
	return 0;
}