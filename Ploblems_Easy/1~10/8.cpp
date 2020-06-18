#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    string str=a+b;
    int num=stoi(str);
    bool judge=false;
    for(int i=1; i<num; i++){
        if(i*i==num){
            judge=true;
            break;
        }
        if(i*i>num){
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
