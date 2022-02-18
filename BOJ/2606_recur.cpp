#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> check;
vector<vector<int>> E(n + 1);
vector<int> dfs;
vector<int> bfs;

void f(int cur){
  dfs.push_back(cur);
  for(auto next : E[cur]){
    if ( check[next] == 0) {
      check[next] = 1;
      f(next);
    }
  }
}

int main(void){
  int k;
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m >> k;
  E = vector<vector<int>>(n + 1);

  for ( int i = 0; i < m ; i++){
    int v1, v2;
    cin >> v1 >> v2;
    E[v1].push_back(v2);
    E[v2].push_back(v1);
  }

  for(auto& e : E){
    sort(e.begin(), e.end());
  }

  check = vector<int> (n+1, 0);
  check[k] = 1;
  f(k);
  
  check = vector<int> (n+1, 0);
  queue<int> Q;
  check[k] = 1;
  Q.push(k);
  while (!Q.empty()){
    int cur = Q.front();
    bfs.push_back(cur);
    Q.pop();
    for(auto next : E[cur]){
      if(check[next] == 0){
        check[next] = 1;
        Q.push(next);
      }
    }
  }
  
  for(auto v : dfs){
    cout << v << " ";
  }
  cout << "\n";
  for(auto v : bfs){
    cout << v << " ";
  }
  cout << "\n";


  return 0;
}