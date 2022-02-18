#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int N, M;
  cin >> N >> M;
  int arr[N+1];
  arr[0] = 0;
  for(int i = 1; i < N+1; i++){
    cin >> arr[i];
  }

  for(int i = 1; i < N+1; i++){
    arr[i] += arr[i-1];
  }
  
  while(M--){
    int a, b;
    cin >> a >> b;
    cout << arr[b] - arr[a-1] << "\n";
  }

  return 0;
}