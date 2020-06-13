#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;

  cin >> A >> B >> C >> D;

  int i = 0;

  while (i >= 0) {
    int judge = i % 2;
		if (judge == 0 ) {
			C = C - B;
      if (C <= 0){
        cout << "Yes" << endl;
        break;
      }
		}
    else {
      A = A - D;
      if (A <= 0){
        cout << "No" << endl;
        break;
      }
    }
    i++;
	}

  return 0;
}
