#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
	cin >> n;

	vector<int> x(n + 1);
	long num = n; // 素因数分解する変数num 

	for (long i = 2; i <= n; i++) {
		while (num%i == 0) { // 素数で割り切れなくなるまで割っていく
			x.at(i)++; //割った個数を配列に足す
			num /= i;
		}
	}

    long count=0;
    long count2;

    for (long i = 2; i <= n; i++) {
		if(x.at(i)==1){
            count++;
        }
        else if(x.at(i)!=0){
            count2=1;
            while(x.at(i)>0){
                count++;
                x.at(i)-=count2;
                count2++;
            }
        }
	}

    cout << count << endl;
}