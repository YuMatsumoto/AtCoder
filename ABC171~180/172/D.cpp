#include <bits/stdc++.h>
using namespace std;

int main(){
    long N;
    cin >> N;
    map<long,long>A;
    A[1]=1;
    long long sum=1;
    for(long i=2; i<=N; i++){
        if(A.find(i)==A.end()){
            long num=i;
            A[num]=2;
            sum+=num*A[num];
            long j=2;
            long tmp=num;
            while(true){
                num=i*j;
                if(num>N){
                    break;
                }
                A[num]=A[tmp]+1;
                sum+=num*A[num];
                j++;
                tmp=num;
            }
        }
    }
    cout << sum << endl;
}