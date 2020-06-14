#include <bits/stdc++.h>
using namespace std;

int main(){
    int num[5];
    int n;
    for(int i=0; i<5; i++){
        cin >> num[i];
        if(num[i]==0){
            n=i+1;
        }
    }
    cout << n << endl;
}
