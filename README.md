#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <int> ke[1001];
int used[1001];
void DFS1(int u){ //O(V+E)
	cout << u << " ";
	used[u]=1;
	for(auto v : ke[u]){
		if(used[v]==0){
			DFS(v);
		}
	}
}

int a[1001][1001];
int used[1001];
void DFS2(int u){ //O(V*V)
	cout << u <<" ";
	used[u]=1;
	//duyet ds ke cua dinh u : duyet cai dong thu u trong ma tran ke a
	for(int i=1;i<=n;i++){
		if(a[u][i]==1){
			if(used[i]==0){
				DFS2(i);
			}
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
