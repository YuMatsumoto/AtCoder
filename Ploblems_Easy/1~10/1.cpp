#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    int socket=1;
    int socket_sum=0;
    while(socket<B){
        socket+=A;
        socket--;
        socket_sum++;
    }
    cout << socket_sum << endl;
}