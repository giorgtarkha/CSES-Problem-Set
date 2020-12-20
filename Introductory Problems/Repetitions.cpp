#include <bits/stdc++.h>

using namespace std;

int main() {
	
	string s;
	cin >> s;
	s += ' ';
	int curr = 1, ans = 0;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] != s[i - 1]) {
			ans = max(ans, curr);
			curr = 1;
		} else {
			curr++;
		}
	}
	printf("%d\n", ans);
	
	return 0;
}