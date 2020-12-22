#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, m;
	scanf("%d %d", &n, &m);
	char grid[n][m];
	char step[n][m];
	string s;
	int starti, startj, endi, endj;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			scanf(" %c", &grid[i][j]);
			step[i][j] = ' ';
			if (grid[i][j] == 'A') {
				starti = i;
				startj = j;
			}
			if (grid[i][j] == 'B') {
				endi = i;
				endj = j;
			}
		}
	}
	
	queue<pair<int, int>> q;
	q.push({starti, startj});
	while (!q.empty()) {
		pair<int, int> curr = q.front();
		q.pop();
		int curri = curr.first, currj = curr.second;
		if (grid[curri][currj] == 'B') {
			break;
		}
		for (int i = -1; i <= 1; ++i) {
			for (int j = -1; j <= 1; ++j) {
				if ((!i || !j) && (i || j) && curri + i >= 0 && curri + i < n && currj + j >= 0 && currj + j < m && 
				    step[curri + i][currj + j] == ' ' && grid[curri + i][currj + j] != '#') {
						char direction = i == -1 ? 'U' : i == 1 ? 'D' : j == -1 ? 'L' : 'R';
						step[curri + i][currj + j] = direction;
						q.push({curri + i, currj + j});
					}
			}
		}
	}
	
	if (step[endi][endj] == ' ') {
		printf("NO\n");
	} else {
		string ans = "";
		while (endi != starti || endj != startj) {
			ans = ans += step[endi][endj];
			if (step[endi][endj] == 'L') {
				endj++;
			} else if (step[endi][endj] == 'R') {
				endj--;
			} else if (step[endi][endj] == 'U') {
				endi++;
			} else if (step[endi][endj] == 'D') {
				endi--;
			}
		}
		reverse(ans.begin(), ans.end());
		printf("YES\n%d\n%s\n", ans.length(), ans.c_str());
	}
	
	return 0;
}