#include <bits/stdc++.h>

using namespace std;

int main() {
	
	string s;
	cin >> s;
	set<char> dna {'A', 'C', 'G', 'T'};
	set<char> curr_dna = dna;
	string ans = "";
	for (int i = 0; i < s.length(); i++) {
		if (curr_dna.size() == 1 && curr_dna.count(s[i])) {
			ans += s[i];
			curr_dna = dna;
		} else {
			curr_dna.erase(s[i]);
		}
	}
	ans += *curr_dna.begin();
	printf("%s\n", ans.c_str());
	
	return 0;
}