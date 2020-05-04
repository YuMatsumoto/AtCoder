#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    int num;
    int num2;
    int num3[N];
    int count=0;
    for(int i=0; i<N; i++){
        num3[i]=0;
    }
    for(int i=0; i<K; i++){
        cin >> num;
        for(int j=0; j<num; j++){
            cin >> num2;
            num3[num2-1]++;
        }
    }
    for(int i=0; i<N; i++){
        if(num3[i]==0){
            count++;
        }
    }
    cout << count << endl;
}
