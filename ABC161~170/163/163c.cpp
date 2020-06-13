#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A[N-1];
  int num[N]={0};
  for(int i=0; i<N-1; i++){
    cin >> A[i];
    num[A[i]-1]++;
  }
  for(int i=0; i<N; i++){
    cout << num[i] << endl;
  }
}
