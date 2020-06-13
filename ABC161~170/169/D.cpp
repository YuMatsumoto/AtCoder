#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
	cin >> n;

	vector<int> x(n + 1);
	long num = n;

	for (long i = 2; i <= n; i++) {
		while (num%i == 0) {
			x.at(i)++;
			num /= i;
		}
	}

    long count=0;
    long countP_E;

    for (long i = 2; i <= n; i++) {
		if(x.at(i)==1){
            count++;
        }
        else if(x.at(i)!=0){
            countP_E=1;
            while(x.at(i)>0){
                count++;
                x.at(i)-=countP_E;
                countP_E++;
            }
        }
	}

    cout << count << endl;
}