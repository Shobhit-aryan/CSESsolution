#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>>& map, int x, int y, int row, int col){
	if(x<0 || x>=row || y<0 || y>=col || map[x][y]!='.')
            return;
    
    map[x][y] = '?';
    dfs(map, x+1, y, row, col);
    dfs(map, x, y+1, row, col);
    dfs(map, x-1, y, row, col);
    dfs(map, x, y-1, row, col);
}

int solve(vector<vector<char>>& map, int n, int m){
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]=='.'){
				dfs(map,i,j,n,m);
				ans++;
			}
		}
	}
	return ans;
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<char>> map;
	for(int i=0;i<n;i++){
		vector<char> temp;
		for(int j=0;j<m;j++){
			char x;
			cin>>x;
			temp.push_back(x); 
		}
		map.push_back(temp);
	}
	
	cout<<solve(map,n,m);
}
