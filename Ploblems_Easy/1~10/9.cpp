#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    int x;
    int length=0;
    for(int i=0; i<N; i++){
        cin >> x;
        if(K-x>x){
            length+=2*x;
        }
        else{
            length+=2*(K-x);
        }
    }
    cout << length << endl;
}
