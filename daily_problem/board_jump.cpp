#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> board(10, vector<int>(10));
vector<vector<int>> dp(10, vector<int>(10, -1));

void initBoard(vector<vector<int>>& board){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			cin >> board[i][j];
		}
	}
}

bool solve(vector<vector<int>>& board, vector<vector<int>>& dp, int i, int j){
	if(i==board.size()-1 && j==board.size()-1) return true;
	if(i>=board.size() || j>=board.size()) return false;
	if(dp[i][j] != -1) return dp[i][j];
	return dp[i][j] = solve(board, dp, i + board[i][j], j) || solve(board, dp, i, j + board[i][j]);
}

int main(){
	initBoard(board);
	if(solve(board, dp, 0, 0)) cout << "is OK" << endl;
	return 0;
}


