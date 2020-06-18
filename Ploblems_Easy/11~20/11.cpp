#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    bool judge;
    int count;
    int max = -1;
    int maxval;
    for (int i = 1; i <= N; i++)
    {
        count = 0;
        int tmp = i;
        while (true)
        {
            if (tmp % 2 == 1 || tmp == 0)
            {
                break;
            }
            else
            {
                tmp = tmp / 2;
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            maxval = i;
        }
    }
    cout << maxval << endl;
}
