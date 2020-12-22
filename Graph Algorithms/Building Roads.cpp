#include <bits/stdc++.h>

using namespace std;

void go(int curr, vector<vector<int>>& adj, vector<int>& clusters, vector<bool>& visited) {
	visited[curr] = true;
	clusters.push_back(curr);
	for (int i = 0; i < adj[curr].size(); i++) {
		if (!visited[adj[curr][i]]) {
			go(adj[curr][i], adj, clusters, visited);
		}
	}
}

int main() {
	
	int n, m;
	scanf("%d %d", &n, &m);
	vector<vector<int>> adj(n);
	vector<bool> visited(n, false);
	for (int i = 0; i < m; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		adj[u - 1].push_back(v - 1);
		adj[v - 1].push_back(u - 1);
	}
	
	vector<vector<int>> clusters;
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			clusters.push_back({});
			go(i, adj, clusters.back(), visited);
		}
	}
	
	printf("%d\n", clusters.size() - 1);
	for (int i = 1; i < clusters.size(); i++) {
		printf("%d %d\n", clusters[i - 1][0] + 1, clusters[i][0] + 1);
	}
	
	return 0;
}