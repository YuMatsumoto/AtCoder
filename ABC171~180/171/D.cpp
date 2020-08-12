#include <bits/stdc++.h>
using namespace std;

int main(){
    long N,Q,a;
    map<long,long>A;
    cin >> N;
    long long sum=0;
    for(long i=0; i<N; i++){
        cin >> a;
        if(A.find(a)==A.end()){
            A[a]=1;
        }
        else{
            A[a]++;
        }
        sum+=a;
    }
    cin >> Q;
    long B,C;
    for(long i=0; i<Q; i++){
        cin >> B;
        cin >> C;
        if(A.find(B)==A.end()){
            cout << sum << endl;
        }
        else{
            sum-=A[B]*B;
            sum+=A[B]*C;
            if(A.find(C)==A.end()){
                A[C]=A[B];
            }
            else{
                A[C]+=A[B];
            }
            A.erase(B);
            cout << sum << endl;
        }
    }
}
