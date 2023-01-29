// Day 9
// https://leetcode.com/problems/time-needed-to-inform-all-employees/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> adj(n);
        for(int i = 0; i < n; i++){
            if(manager[i] != -1)
                adj[manager[i]].push_back(i);
        }
        return dfs(adj, headID, informTime);
    }

    int dfs(vector<vector<int>>& adj, int i, vector<int>& infoTime){
        int tmp = 0;
        for(auto v : adj[i]){
            tmp = max(infoTime[i] + dfs(adj, v, infoTime), tmp);
        }
        return tmp;
    }
};