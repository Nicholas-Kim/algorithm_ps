#include <bits/stdc++.h>

using namespace std;

int main(void){

  int N, M;
  vector<int> cards;
  vector<int> sumV;
  cin >> N >> M;
  for (int i = 0; i < N; i++){
    int tmp;
    cin >> tmp;
    cards.push_back(tmp);
  }
  int ans = 0;
  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      for(int k = j+1; k < N; k++){
        int t = cards[i]+cards[j]+cards[k];
        if ( t <= M && ans < t){
          ans = t;
        }
      }
    }
  }
  
  cout << ans;

  return 0;
}