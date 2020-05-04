#include <bits/stdc++.h>
using namespace std;

int main(){
    long A,B,N;
    cin >> A >> B >> N;
    long num;
    long max=0;
    for(long i=1; i<=N; i++){
        num = (A*i/B)-(A*long((double(i)/B)));
        if(num>max){
            max=num;
        }
    }
    cout << num << endl;
}
