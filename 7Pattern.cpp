#include <bits/stdc++.h>
using namespace std;
void pattern7(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2 * N - 1; j++)
        {
            if (j >= N - i - 1 && j <= N + i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cin >> N;
    pattern7(N);
    return 0;
}