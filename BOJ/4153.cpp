#include <bits/stdc++.h>
using namespace std;


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  array <int, 3> arr = {}; 

  while(1){
    cin >> arr[0] >> arr[1] >> arr[2];
    if(arr[0] == 0 && arr[1] == 0 && arr[2]==0){
      return 0;
    }
    sort(arr.begin(), arr.end());
    if(arr[2]*arr[2] == arr[1]*arr[1] + arr[0]*arr[0]){
      cout << "right" << "\n";
    }else{
      cout << "wrong" << "\n";
    }
  }
  
  return 0;
}