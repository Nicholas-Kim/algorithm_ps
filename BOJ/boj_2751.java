#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[1000001];

int main(){
    
    int N = 0;
    cin >> N;
    
    for(int i=0;i<N;i++){
        int tmp=0;
        cin >> tmp;
        a[i]=tmp;
    }
    
    sort(a, a+N);
    
    for(int i=0;i<N;i++){
        cout << a[i];
        printf("\n");
    }
    
    
    return 0;
}
