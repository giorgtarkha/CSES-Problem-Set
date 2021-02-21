#include <bits/stdc++.h>

using namespace std;
 
int div_count(int n, int* prime) {
	int res = 1, count = 0, curr = prime[n];
	while (n > 1) {
		if (prime[n] == curr) {
			count++;
		} else {
			res *= (count + 1);
			count = 1;
			curr = prime[n];
		}
		n /= prime[n];
	}
	res *= (count + 1);
	return res;
}	
 
int prime[1000001];
int main() {
	
	for (int i = 0; i <= 1000000; i++) {
		prime[i] = i;
	}
	for (int i = 2; i * i <= 1000000; i++) {
		if (prime[i] == i) {
			for (int j = i; j <= 1000000; j += i) {
				prime[j] = i;
			}
		}
	}
	
    int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		printf("%d\n", div_count(x, prime));
	}
    
    return 0;
}