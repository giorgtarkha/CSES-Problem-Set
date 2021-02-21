#include <bits/stdc++.h>

using namespace std;

int main() {
	
	string s;
	cin >> s;
	int count[26];
	memset(count, 0, 26 * sizeof(int));
	for (int i = 0; i < s.length(); i++) {
		count[s[i] - 'A']++;
	}
	string ans = string(s.length(), ' ');
	int index = 0;
	for (int i = 0; i < 26; i++) {
		while (count[i] >= 2) {
			ans[index] = 'A' + i;
			ans[ans.length() - index - 1] = 'A' + i;
			index++;
			count[i] -= 2;
		}
	}
	
	bool possible = true;
	if (ans.length() % 2) {
		for (int i = 0; i < 26; i++) {
			if (count[i]) {
				ans[index] = 'A' + i;
				count[i]--;
				break;
			}
		}
		for (int i = 0; i < 26; i++) {
			if (count[i]) {
				possible = false;
				break;
			}
		}
	} else {
		for (int i = 0; i < 26; i++) {
			if (count[i]) {
				possible = false;
				break;
			}
		}
	}
	
	printf("%s\n", possible ? ans.c_str() : "NO SOLUTION\n");
	
	return 0;
}