#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <int> ke[1001];
int used[1001];
void DFS(int u){
	cout << u << " ";
	used[u]=1;
	for(auto v : ke[u]){
		if(used[v]==0){
			DFS(v);
		}
	}
}
int main() {
	int n,m;
	cin >> n >> m;
	while(m--){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	DFS(1);
}