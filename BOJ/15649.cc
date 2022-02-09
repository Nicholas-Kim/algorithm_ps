#include <bits/stdc++.h>

using namespace std;

vector<int> picked;
vector<int> out;
int n, m;

void f (int to_pick){
  if (to_pick == 0) {
    vector<int> v;
    for(auto& o : out) {
      v.push_back(o);
    }
    int tmp = 1;
    for(int i = 0; i < v.size(); i++){
      for(int j = i; j < v.size(); j++){
        if(v[i] > v[j]){
          tmp = 0;
          break; 
        }
      }
    }
    if(tmp == 1){
      for(int i = 0; i < v.size(); i++){
      cout << v[i] << " ";
    }
    cout << "\n";
    return;
    }
    
  }
  
  for (int i = 1; i <= n; i++){
    if (picked[i] == 0) {
      picked[i] = 1;
      out.push_back(i);
      f(to_pick - 1);
      picked[i] = 0;
      out.pop_back();
    }
  }
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m;

  picked = vector<int> (n+1, 0);

  f(m);

  return 0;
}
