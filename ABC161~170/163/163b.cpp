#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  int a[M];
  for(int i=0; i<M; i++){
    cin >> a[i];
  }

  int sum=0;
  for(int i=0; i<M; i++){
    sum += a[i];
  }

  int asobi;
  if(sum > N){
    asobi = -1;
  }
  else{
    asobi = N-sum;
  }

  cout << asobi << endl;

  return 0;
}
