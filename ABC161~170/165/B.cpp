#include <bits/stdc++.h>
using namespace std;

int main(){
    long num=100;
    long X;
    int year=0;
    cin >> X;
    while(num<X){
        num=num*1.01;
        year++;
    }
    cout << year << endl;
}
