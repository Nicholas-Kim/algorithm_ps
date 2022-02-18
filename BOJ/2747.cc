#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int c_size = 100;
ll dp[c_size];
int main(void){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  dp[0] = 0;
  dp[1] = 1;
  for(int i = 0; i <= n; i++){
    if(i <= 1){
      continue;
    }
    dp[i] = dp[i-1] + dp[i-2];
  }

  cout << dp[n];

  return 0;
}
  

#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
}