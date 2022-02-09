#include <bits/stdc++.h>
using namespace std;

int main(void){
  int a, b;
  int newa =0 , newb = 0;
  cin >> a >> b;
  while (a != 0){
    newa = newa*10 + a%10;
    a /= 10;
  }
  while (b != 0){
    newb = newb*10 + b%10;
    b /= 10;
  }
  if (newa < newb){
    cout << newb << "\n";
  }else{
    cout << newa << "\n";
  }
}