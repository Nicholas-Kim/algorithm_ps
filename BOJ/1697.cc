#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

int main(void){
  int start, end;
  cin >> start >> end;

  int inf = (int)1e9;
  vector<int> dis(100001, inf);
  vector<int> check(100001, 0);

  queue<int> Q;
  check[start] = 1;
  Q.push(start);
  dis[start] = 0;

  while(!Q.empty()){

  }

  return 0;
}