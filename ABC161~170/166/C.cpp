#include <bits/stdc++.h>
using namespace std;

int main(){
    long N,M;
    cin >> N >> M;
    long height[N];
    long road[M][2];
    long judge[N];
    long count=0;
    for(int i=0; i<N; i++){
        cin >> height[i];
        judge[i]=1;
    }
    for(int i=0; i<M; i++){
        cin >> road[i][0] >> road[i][1];
        road[i][0]--;
        road[i][1]--;
    }
    for(int i=0; i<M; i++){
        if(height[road[i][0]]>height[road[i][1]]){
            judge[road[i][1]]=0;
        }
        else if(height[road[i][0]]==height[road[i][1]]){
            judge[road[i][1]]=0;
            judge[road[i][0]]=0;
        }
        else if(height[road[i][0]]<height[road[i][1]]){
            judge[road[i][0]]=0;
        }
    }
    for(int i=0; i<N; i++){
        if(judge[i]==1){
            count++;
        }
    }
    cout << count << endl;
}