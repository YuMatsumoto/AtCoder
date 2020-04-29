#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int count=1;

  vector<string> s(N);

  for(int i=0; i<N; i++){
    cin >> s.at(i);
  }

  sort(s.begin(),s.end());

  for(int i=1; i<N; i++){
    if(s.at(i-1) < s.at(i)){
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
