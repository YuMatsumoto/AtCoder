#include <bits/stdc++.h>
using namespace std;

int main(){
    int K,A,B;
    bool judge=false;
    cin >> K >> A >> B;
    for(int i=A; i<=B; i++){
        if(i%K == 0){
            judge=true;
            break;
        }
    }
    if(judge){
        cout << "OK" << endl;
    }
    else{
        cout << "NG" << endl;
    }
}
