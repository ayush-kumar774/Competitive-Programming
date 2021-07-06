//https://codeforces.com/contest/1145/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>V;
    int n;
    cin >> n;
    for(int i =0 ; i< n; i++)
    {
        int x;
        cin >> x;
        V.push_back(x);
    }
    if(is_sorted( V.begin(), V.end() ) )
    {
        cout << n ;
    }
}
