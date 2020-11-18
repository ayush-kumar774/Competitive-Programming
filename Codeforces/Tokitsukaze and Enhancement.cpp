//http://codeforces.com/problemset/problem/1191/A
#include<bits/stdc++.h>
using namespace std;
void KantaiCollection(int a)
{
    if(a == 0)
    {
        cout << 1 << " A";
    }
    else if (a == 1)
    {
        cout << 0 << " A";
    }
    else if (a == 2)
    {
        cout << 1 << " B";
    }
    else
        cout << 2 << " A";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a ;
    cin >> a ;
    a = a%4 ;
    KantaiCollection(a);
}
