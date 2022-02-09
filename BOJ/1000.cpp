#include <bits/stdc++.h>
using namespace std;


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int a, b, c, result, ans, tmp;
  cin >> a >> b >> c;
  result = a * b * c;
  array<int, 10> arr ={0,};

  while (result > 0){
    tmp = result % 10;
    arr[tmp]++;
    result /= 10;
  }

  for(int i = 0; i < 10; i++){
    cout << arr[i] << "\n";
  }


  return 0;
}