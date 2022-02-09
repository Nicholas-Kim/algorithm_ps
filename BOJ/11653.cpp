#include <bits/stdc++.h>

using namespace std;


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int x;
  cin >> x;

  if (x == 1) {
    return 0;
  }

  for (int i = 2; i <= x; i++){
    while(x % i == 0){
      cout << i << "\n";
      x /= i;
    }
  }

  return 0;
}