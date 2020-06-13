#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,K;
    cin >> A >> B >> C >> K;
    int sum=0;
    bool judge=true;
    if(K<=A){
        sum+=K;
        judge=false;
    }
    else{
        sum+=A;
        K-=A;
    }
    if(judge){
        if(K<=B){
            judge=false;
        }
        else{
            K-=B;
            sum-=K;
        }
    }
    cout << sum << endl;
}