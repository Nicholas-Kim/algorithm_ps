#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int cache[21][21][21];
const int inf = (int)1e9;

int f(int a, int b, int c) {
  if (a <= 0 || b <= 0 || c <= 0) return 1;
  if (a > 20 || b > 20 || c > 20) return f(20, 20, 20);
  if (cache[a][b][c] != inf) return cache[a][b][c];
  if (a < b && b < c) return cache[a][b][c] = f(a, b, c-1) + f(a, b-1, c-1) - f(a, b-1, c);
  else return cache[a][b][c] = f(a-1, b, c) + f(a-1, b-1, c) + f(a-1, b, c-1) - f(a-1, b-1, c-1);
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  for(int i = 0; i < 21; i++) {
    for (int j = 0; j < 21; j++) {
      for (int k = 0; k < 21; k++) {
        cache[i][j][k] = inf;
      }
    }
  }
  
  while(1){
    int a, b, c;
    cin >> a >> b >> c;
    if ( a == -1 && b == -1 && c == -1 ) break;
    cout << "w(" << a << ", " << b << ", " << c << ") = " << f(a, b, c) << "\n";
  }


  return 0;
}