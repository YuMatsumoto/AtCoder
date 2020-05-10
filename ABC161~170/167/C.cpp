#include <bits/stdc++.h>
using namespace std;

int main(){
    long N,M,X;
    cin >> N >> M >> X;
    bool judge=true;
    long value[N];
    long num[N][M];
    long num2;
    long count;
    long depth=0;
    long sum=0;
    for(int i=0; i<N; i++){
        value[i]=0;
        for(int j=0; j<M; j++){
            num[i][j]=0;
        }
    }
    for(int i=0; i<N; i++){
        cin >> value[i];
        for(int j=0; j<M+1; j++){
            cin >> num[i][j];
        }
    }
    for(int i=0; i<M; i++){
        count=0;
        num2=X;
        for(int j=0; j<N; j++){
            if(num2<0){
                break;
            }
            else{
                num2-=num[j][i];
                count++;
            }
        }
        if(num2>0){
            judge=false;
            break;
        }
        else{
            if(depth<count){
                depth=count;
            }
        }
    }
    if(judge){
        for(int i=0; i<depth; i++){
            sum+=value[i];
        }
        cout << sum << endl;
    }
    else{
        sum=-1;
        cout << sum << endl;
    }
}