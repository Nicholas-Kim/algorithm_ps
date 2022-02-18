#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int K, N;
  cin >> K >> N;
  ll arr[K];
  ll max = 0;
  for (int i = 0; i < K; i++){
    cin >> arr[i];
    if (max < arr[i]) max = arr[i];
  }
  ll start = 1;
  ll end = max;
  ll mid;
  ll ans = 0;
  while(start <= end){
    mid = (start + end)/2;
    ans = 0;
    for(int i = 0; i < K; i++){
      ans += arr[i]/mid;
    }
    if(ans >= N) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  cout << end << "\n";

  return 0;
}