#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, x;
	scanf("%d %d", &n, &x);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	map<long long, long long> sums;
    long long ans = 0; 
    long long curr_sum = 0; 
    for (int i = 0; i < n; i++) { 
        curr_sum += a[i]; 
  
        if (curr_sum == x) {
            ans++; 
		}
        ans += sums[curr_sum - x]; 	
        sums[curr_sum]++; 
    } 
	printf("%lld\n", ans);
	
	return 0;
}