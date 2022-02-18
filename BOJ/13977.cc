#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  vector<ll> F(4000001);
  F[0] = 1;

  for(int i = 1; i < F.size(); i++){
    F[i] = (F[i-1] * i);
  }

  ll N, K;
  cin >> N >> K;
  ll ans = F[N] / F[K];
  ans /= F[N-K];
  cout << ans << "\n";

  return 0;
}