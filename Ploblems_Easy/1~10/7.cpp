#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;
    int b;
    for (int i = 0; i < N; i++)
    {
        cin >> b;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (A[i][j] == b)
                {
                    A[i][j] = 0;
                }
            }
        }
    }
    bool judge = false;
    int sum[8] = {0};
    for (int i = 0; i < 3; i++)
    {
        sum[0] += A[0][i];
        sum[1] += A[1][i];
        sum[2] += A[2][i];
        sum[3] += A[i][0];
        sum[4] += A[i][1];
        sum[5] += A[i][2];
    }
    sum[6] = A[0][0] + A[1][1] + A[2][2];
    sum[7] = A[0][2] + A[1][1] + A[2][0];
    for (int i = 0; i < 8; i++)
    {
        if (sum[i] == 0)
        {
            judge = true;
            break;
        }
    }
    if (judge)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
