#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long num,sum;
    cin >> sum;
    for(long long i=0; i<n-1; i++){
        num=0;
        cin >> num;
        if(num==0){
            sum=0;
            break;
        }
        if(sum>=0 && sum<=1000000000000000000){
            sum*=num;
        }
        else{
        }
    }
    if(sum>=0 && sum<=1000000000000000000){
        cout << sum << endl;
    }
    else{
        cout << '-1' << endl;
    }
}