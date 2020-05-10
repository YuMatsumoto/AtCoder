#include <bits/stdc++.h>
using namespace std;

int main(){
    string S,T;
    cin >> S >> T;
    long num=S.size();
    bool judge=true;
    for(int i=0; i<num; i++){
        if(S[i]!=T[i]){
            judge=false;
        }
    }
    if(judge){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}