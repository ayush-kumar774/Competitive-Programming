//http://codeforces.com/problemset/problem/705/A
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n ;
    cout << "I hate ";
    for(int i = 2; i <= n; i++ )
    {
        if(i % 2 == 0)
        {
            cout << "that I love ";
        }
        else
            cout << "that I hate ";
    }
    cout << "it" << endl;
}
