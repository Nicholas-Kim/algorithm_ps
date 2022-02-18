#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m;

  cin >> n >> m;
  set<int> s;
  int N = n+m;
  while(N--){
    int tmp;
    cin >> tmp;
    if (s.find(tmp) != s.end()){
      s.erase(tmp);
    }else{
      s.insert(tmp);
    }
  }
  cout << s.size();
  return 0;
}