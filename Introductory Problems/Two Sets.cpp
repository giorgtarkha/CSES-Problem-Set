#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long n;
	scanf("%lld", &n);
	long long sum = n * (n + 1) / 2;
	if (sum % 2) {
		printf("NO\n");
		return 0;
	}
	
	long long target = sum / 2;
	vector<int> first, second;
	while (n) {
		if (target - n >= 0) {
			first.push_back(n);
			target -= n;
		} else {
			second.push_back(n);
		}
		n--;
	}
	
	printf("YES\n%d\n", first.size());
	for (int i = 0; i < first.size(); i++) {
		printf("%d ", first[i]);
	}
	printf("\n%d\n", second.size());
	for (int i = 0; i < second.size(); i++) {
		printf("%d ", second[i]);
	}
	printf("\n");
	
	return 0;
}