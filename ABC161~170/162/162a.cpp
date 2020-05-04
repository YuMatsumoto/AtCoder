#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  while(N>=1){
    if(N%10 == 7){
      cout << "Yes" << endl;
      break;
    }
    else if(N<10){
      cout << "No" << endl;
      break;
    }
    N = N/10;
  }
}
