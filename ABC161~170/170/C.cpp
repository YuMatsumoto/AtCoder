#include <bits/stdc++.h>
using namespace std;

int main(){
    int X,N;
    cin >> X >> N;
    if(N==0){
        cout << X << endl;
    }
    else if(N==100){
        if(X>=51){
            cout << 101 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    else{
        int p[N];
        for(int i=0; i<N; i++){
            cin >> p[i];
        }
        int p2[102];
        for(int i=0; i<=101; i++){
            p2[i]=i;
            for(int j=0; j<N; j++){
                if(i==p[j]){
                    p2[i]=1000;
                    break;
                }
            }
        }
        int abs;
        int num;
        for(int i=0; i<=101; i++){
            if(i==0){
                abs=pow((X-p2[i]),2);
                num=p2[i];
            }
            else{
                if(abs>pow((X-p2[i]),2)){
                    abs=pow((X-p2[i]),2);
                    num=p2[i];
                }
                else if(abs==pow((X-p2[i]),2)){
                    if(num>p2[i]){
                        num=p2[i];
                    }
                }
            }
        }
        cout << num << endl;
    }    
}
