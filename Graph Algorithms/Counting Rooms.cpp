#include <bits/stdc++.h>

using namespace std;

void go(vector<string>& grid, vector<vector<bool>>& visited, int i, int j, int n, int m) {
	if (i < 0 || i == n || j < 0 || j == m || grid[i][j] == '#' || visited[i][j]) {
		return;
	}
	visited[i][j] = true;
	for (int oi = -1; oi <= 1; oi++) {
		for (int oj = -1; oj <= 1; oj++) {
			if (oj && oi) {
				continue;
			}
			go(grid, visited, i + oi, j + oj, n, m);
		}
	}
}

int main() {
	
	int n, m;
	scanf("%d %d", &n, &m);
	string s;
	vector<string> grid(n);
	for (int i = 0; i < n; i++) {
		cin >> grid[i];
	}
	
	vector<vector<bool>> visited(n, vector<bool>(m, false));
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == '.' && !visited[i][j]) {
				go(grid, visited, i, j, n, m);
				ans++;
			}
		}
	}
	printf("%d\n", ans);
	
	return 0;
}