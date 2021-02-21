#include <bits/stdc++.h>

using namespace std;
 
bool possible(int* x, int n, int k, long long maxv) {
	for (int i = 0; i < n; i++) {
		if (x[i] > maxv) {
			return false;
		}
	}
	
	long long curr_sum = 0;
	int count = 1;
	for (int i = 0; i < n; i++) {
		if (curr_sum + x[i] <= maxv) {
			curr_sum += x[i];
		} else {
			curr_sum = x[i];
			count++;
		}
	}
	
	return count <= k;
}
 
int main() {
	
    int n, k;
	scanf("%d %d", &n, &k);
	int x[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}	
	long long low = 0, high = 1ll << 62;
	while (low < high) {
		long long mid = (low + high) / 2;
		if (possible(x, n, k, mid)) {
			high = mid;
		} else {
			low = mid + 1;
		}
	}
	printf("%lld\n", high);
    
    return 0;
}