#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, m;
	scanf("%d %d", &n, &m);
	map<int, int> prices;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		prices[x]++;
	}
	
	for (int i = 0; i < m; i++) {
		int t;
		scanf("%d", &t);
		auto it = prices.lower_bound(t);
		if (it->first != t) {
			if (it == prices.begin()) {
				printf("-1\n");
				continue;
			}
			it--;
		}
		if (it->second) {
			printf("%d\n", it->first);
			it->second--;
			if (!it->second) {
				prices.erase(it);
			}
		} else {
			printf("-1\n");
		}
	}
	
	return 0;
}