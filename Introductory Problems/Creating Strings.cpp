#include <bits/stdc++.h>

using namespace std;

int main() {
	
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	vector<string> ans;
	do {
		ans.push_back(s);
	} while (next_permutation(s.begin(), s.end()));
	printf("%d\n", ans.size());
	for (int i = 0; i < ans.size(); i++) {
		printf("%s\n", ans[i].c_str());
	}
	
	return 0;
}