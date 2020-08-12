#include <bits/stdc++.h>
using namespace std;

int main(){
    long N,M,K;
    cin >> N >> M >> K;
    long A[N],B[M];
    long count=0;
    long sum=0;
    for(int i=0; i<N; i<M){
        cin >> A[i];
    }
    for(int i=0; i<M; i<M){
        cin >> B[i];
    }
    long sumA=0;
    for(int i=0; i<N; i++){
        sum+=A[i];
        if(sum<K){
            sumA+=A[i];
            count++;
        }
    }
    if(count!=N){
        for(int i=0; i<count; i++){
            sumA-=A[count-1];
            while(true){
                
            }
        }
    }
    cout << count << endl;
}