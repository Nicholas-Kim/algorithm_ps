#include <bits/stdc++.h>

using namespace std;


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  cin >> n >> m;

  int inf = (int)1e9;
  vector<vector<int>> adj(n, vector<int> (n, inf));

  for (int i = 0; i < m; i++ ){
    int t1, t2, cost;
    cin >> t1 >> t2 >> cost;
    t1--;
    t2--;
    adj[t1][t2] = min(adj[t1][t2], cost);
  }

  for(int i = 0; i < n; i++){
    adj[i][i] = 0;
  }

  for(int k = 0; k < n; k++){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
      }
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++){
      if (adj[i][j] == inf) {
        adj[i][j] = 0;
      }
      cout << adj[i][j] << " ";
    }
    cout << "\n";
  }


}