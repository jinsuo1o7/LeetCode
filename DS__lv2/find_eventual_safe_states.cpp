// Day 9
// https://leetcode.com/problems/find-eventual-safe-states/solutions/2600013/c-topological-sort-diagram/?orderBy=most_votes
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<int> eventualSafeNodes(vector<vector<int>>& G) {
    int N = G.size();
    vector<vector<int>> R(N);
    vector<int> outdegree(N), safe(N), ans;
    queue<int> q;
    for (int i = 0; i < N; ++i) {
        for (int v : G[i]) {
            R[v].push_back(i);
        }
        outdegree[i] = G[i].size();
        if (outdegree[i] == 0) q.push(i);
    }
    while (q.size()) {
        int u = q.front();
        q.pop();
        safe[u] = 1;
        for (int v : R[u]) {
            if (--outdegree[v] == 0) q.push(v);
        }
    }
    for (int i = 0; i < N; ++i) {
        if (safe[i]) ans.push_back(i);
    }
    return ans;
}
};