#include <bits/stdc++.h>

using namespace std;
 
int main() {
	
    int n;
    scanf("%d", &n);
	for (int i = 0; i < (1 << n); i++) {
		int current_value = (i >> 1) ^ i;
		string in_bits = string(n, '0');
		int index = n - 1;
		while (current_value) {
			if (current_value & 1) {
				in_bits[index] = '1';
			} else {
				in_bits[index] = '0';
			}
			current_value >>= 1;
			index--;
		}
		printf("%s\n", in_bits.c_str());
	}
    
    return 0;
}