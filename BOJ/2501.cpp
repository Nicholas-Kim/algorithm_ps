#include <bits/stdc++.h>

using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N, K;

   cin >> N >> K;
   
   set<int> v;
   for(int i = 1; i * i <= N; i++){
     if(N % i == 0){
       v.insert(i);
       v.insert(N/i);
     }
   }

   if(K > v.size()){
     cout << 0;
     return 0;
   }else{
     int i = 0; 
     auto iter = v.begin();
     for(; i < K-1; iter++, i++){
     } 
     cout << *iter << "\n";
   }
   return 0;
}
//1 2 4 8 16