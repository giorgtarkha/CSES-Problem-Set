#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);
	int k[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &k[i]);
	}
	
	int ans = 0;
	set<int> current_list;
	int left_index = 0, right_index = 0;
	for (; right_index < n;) {
		if (current_list.count(k[right_index])) {
			current_list.erase(k[left_index]);
			left_index++;
		} else {
			current_list.insert(k[right_index]);
			right_index++;
		}
		ans = max(ans, right_index - left_index);
	}
	printf("%d\n", ans);
	
	return 0;
}