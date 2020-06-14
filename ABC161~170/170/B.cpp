#include <bits/stdc++.h>
using namespace std;

int main(){
    int X,Y;
    cin >> X >> Y;
    int ashi=0;
    bool judge=false;
    for(int i=0; i<X+1; i++){
        ashi=i*4+(X-i)*2;
        if(ashi==Y){
            judge=true;
            break;
        }
    }
    if(judge){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
