#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M,Q;
    cin >> N >> M >> Q;
    int num[4][Q];
    int A[N];
    int sum=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<Q; j++){
            cin >> num[i][j];
        }
    }
    for(int i=0; i<N; i++){
        A[i]=1;
    }
}
