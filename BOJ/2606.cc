#include <bits/stdc++.h>

using namespace std;

int main(void){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m;

  cin >> n >> m;

  vector<vector<int>> E(n+1);

  for ( int i = 0; i < m ; i++){
    int v1, v2;
    cin >> v1 >> v2;
    E[v1].push_back(v2);
    E[v2].push_back(v1);
  }

  vector<int> check(n+1, 0);
  int ans = 0;
  queue<int> Q;
  check[1] = 1;
  Q.push(1);
  while (!Q.empty()){
    int cur = Q.front();
    Q.pop();
    for(auto next : E[cur]){
      if(check[next] == 0){
        check[next] = 1;
        Q.push(next);
        ans += 1;
      }
    }
  }
  
  cout << ans << "\n";


  return 0;
}