#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis) {
        vis[node] = true;

        for (int child : adj[node]) {
            if (!vis[child]) {
                dfs(child, adj, vis);
            }
        }
    }

    void dfsOrder(int node,
                  vector<vector<int>>& adj,
                  vector<bool>& vis,
                  vector<int>& order) {

        vis[node] = true;

        for (int child : adj[node]) {
            if (!vis[child]) {
                dfsOrder(child, adj, vis, order);
            }
        }

        order.push_back(node);
    }
};

int main() {
    int n, m, s;
    cin >> n >> m >> s;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    Solution sol;

    // 1. Find vertices already reachable from s
    vector<bool> reachable(n + 1, false);
    sol.dfs(s, adj, reachable);

    // 2. Find DFS finishing order among unreachable vertices
    vector<bool> vis(n + 1, false);
    vector<int> order;

    for (int i = 1; i <= n; i++) {
        if (!reachable[i] && !vis[i]) {
            sol.dfsOrder(i, adj, vis, order);
        }
    }

    // 3. Process in reverse finishing order
    reverse(order.begin(), order.end());

    int answer = 0;

    for (int node : order) {
        if (!reachable[node]) {
            answer++;

            // Starting here makes everything reachable from this node
            sol.dfs(node, adj, reachable);
        }
    }

    cout << answer << '\n';

    return 0;
}