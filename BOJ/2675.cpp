#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t, tmp;
  string str;
  cin >> t;
  for (int i = 0; i < t; i++){
    cin >> tmp;
    cin >> str;
    for(int j = 0; j < str.length(); j++){
      for(int k = 0; k < tmp; k++){
        cout << str[j];
      }
    }
    cout << "\n";
  }
  return 0;
}