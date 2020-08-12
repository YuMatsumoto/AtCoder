#include <bits/stdc++.h>
using namespace std;

int main(){
    string S,T;
    cin >> S >> T;
    long count=0;
    for(long i=0; i<S.length(); i++){
        if(S[i]!=T[i]){
            count++;
        }
    }
    cout << count << endl;
}