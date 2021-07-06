//https://atcoder.jp/contests/abc133/tasks/abc133_a
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, a , b, mini;
    cin >> n >> a >> b;
    mini = min(a,b);
    mini *= n;
    if(mini <= b)
    {
        cout << mini << endl;
    }
    else
        cout << b << endl ;
}
