#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  queue <int> q1; 
  queue <int> q2;

  for(int i = 0; i < a; i++){
    q1.push(i+1);
  }
  while(q1.size() != 0){
    for(int i = 0; i < b; i++){
      if(i != b-1){
        q1.push(q1.front());
        q1.pop();
      }else{
        q2.push(q1.front());
        q1.pop();
      }
    }
  }

  cout << "<";
  while(q2.size() != 1){
    cout << q2.front() << ", ";
    q2.pop();
  }
  
  cout << q2.front() << ">" << "\n";
  
  
  return 0;
}