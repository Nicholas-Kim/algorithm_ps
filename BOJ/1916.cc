#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

int main(void){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int N, M;
  cin >> N >> M;
  vector<vector<pii>> E(N);
  while (M--){
    int u, v, cost;
    cin >> u >> v >> cost;
    u--;
    v--;
    E[u].push_back({v, cost});
  }

  int start, end;
  cin >> start >> end;
  start--;
  end--;

  int inf = (int)1e9;
  vector<int> dis(N, inf);
  vector<int> check(N, 0);

  dis[start] = 0;

  while(1) {
    int min = inf;
    int cur;
    for(int i = 0; i < N; i++){
      if(check[i] == 0 && dis[i] < min){
        min = dis[i];
        cur = i;
      }
    }
    if (min == inf){
      break;
    }
    check[cur] = 1;

    for(auto next : E[cur]){
      int nextNode = next.first;
      int edge_length = next.second;
      if (dis[cur] + edge_length < dis[nextNode]){
        dis[nextNode] = dis[cur] + edge_length;
      }
    }
  }

  cout << dis[end];

  return 0;
}