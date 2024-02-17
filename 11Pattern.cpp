#include<bits/stdc++.h>
using namespace std ;
void pattern(int N){
    for (int rows = 1; rows <= N; rows++)
    {
        for (int cols = 1; cols <=N-rows; cols++)
        {
            cout<<" " ;
        }
        for (int cols = 1; cols <=2*rows-1; cols++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
    for (int rows = N-1; rows >= 1; rows--)
    {
        for (int cols = 1; cols <=N-rows; cols++)
        {
            cout<<" " ;
        }
        for (int cols = 1; cols <=2*rows-1; cols++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
}
int main (){
    int N ;
    cout << "How many rows you want : " ;
    cin >> N ;
    pattern(N);
}