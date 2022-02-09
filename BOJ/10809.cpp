#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  string str;
  cin >> str;
  
  int arr[26] = { };
  for(int i = 0; i < 26; i++){
    arr[i] = -1;
  }
  
  for(int i = 0; i < str.length(); i++){
    if(arr[str[i]] == -1){
      arr[str[i]] = i;
    }
  }
  return 0;
}