#include <bits/stdc++.h>
using namespace std;
void Pattern(int N)
{
    for (int rows = 1; rows <= N; rows++)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            cout << cols;
        }
        cout << endl;
    }
    for (int rows = N - 1; rows >= 1; rows--)
    {
        for (int cols = 1; cols <= rows; cols++)
        {
            cout << cols;
        }
        cout << endl;
    }
}
int main()
{
    int N;
    cout << "How many rows you want : ";
    cin >> N;
    Pattern(N);
}