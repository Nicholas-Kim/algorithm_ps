#include <bits/stdc++.h>
using namespace std;

int fibo(int x){
  if (x <= 1){
    return x;
  }else{
    return fibo(x-1) + fibo(x-2);
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int x;
  cin >> x;

  cout << fibo(x);

  return 0;
}