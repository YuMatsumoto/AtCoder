#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,K;
    cin >> A >> B >> C >> K;
    int sum=0;
    if(K<=A){
        sum+=K;
        K=0;
    }
    else{
        sum+=A;
        K-=A;
    }
    if(K<=B){
        K=0;
    }
    else{
        K-=B;
    }
    if(K!=0){
        sum-=C;
    }
    cout << sum << endl;
}