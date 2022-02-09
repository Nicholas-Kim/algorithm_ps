#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int T, a, b;
  cin >> T;
  while (T--){
    cin >> a >> b;
    while (true){
      if (a == b){
        cout << a* 10 << "\n";
        break;
      }
      if (a > b){
        a /= 2;
      }else{
        b/= 2;
      }
    }

  }

  return 0;
}