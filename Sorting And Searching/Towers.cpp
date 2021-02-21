#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	scanf("%d", &n);
	vector<int> towers;
	for (int i = 0; i < n; i++) {
		int k; 
		scanf("%d", &k);
		if (!towers.size()) {
			towers.push_back(k);
		} else {
			int index = upper_bound(towers.begin(), towers.end(), k) - towers.begin();
			if (index == towers.size()) {
				towers.push_back(k);
			} else {
				if (towers[index] != k) {
					towers.erase(towers.begin() + index);
				}
				towers.insert(towers.begin() + index, k);
			}
		}
	}
	printf("%d", towers.size());
	
	return 0;
}