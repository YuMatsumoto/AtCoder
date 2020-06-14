#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int x[N];
    for(int i=0; i<N; i++){
        cin >> x[i];
    }
    long physical;
    long physical_min;
    for(int i=1; i<=100; i++){
        physical=0;
        for(int j=0; j<N; j++){
            physical+=pow((i-x[j]),2);
        } 
        if(i==1){
            physical_min=physical;
        }
        if(physical_min>physical){
            physical_min=physical;
        }
    }
    cout << physical_min << endl;
}