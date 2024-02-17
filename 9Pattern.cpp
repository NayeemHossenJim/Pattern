#include <bits/stdc++.h>
using namespace std;
void Pattern(int N)
{
    for (int rows = N; rows >= 1; rows--)
    {
        for (int cols = 1; cols <= N - rows; cols++)
        {
            cout << " ";
        }
        for (int cols = 1; cols <= rows; cols++)
        {
            cout << cols;
        }
        cout << endl ;
    }
}
int main()
{
    int N;
    cout << "How many rows you want : ";
    cin >> N;
    Pattern(N);
}