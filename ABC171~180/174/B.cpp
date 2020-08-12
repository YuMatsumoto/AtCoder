#include <bits/stdc++.h>
using namespace std;

int main(){
    long N,D;
    cin >> N >> D;
    long X,Y;
    long count = 0;
    for(long i=0; i<N; i++){
        cin >> X >> Y;
        if(D>=sqrt(X*X+Y*Y)){
            count++;
        }
    }
    cout << count << endl;
}
