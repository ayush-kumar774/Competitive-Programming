//https://codeforces.com/problemset/problem/18/A
#include<bits/stdc++.h>
#define aakriti long long int
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
    vector<aakriti>v(3);
    v[0] = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
    v[1] = (x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3);
    v[2] = (x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y2);
    sort(v.begin(), v.end());
    cout << (x1 - x2)*(x1 - x2)<< " " << (y1 - y2)*(y1 - y2);
 /*   for(auto x:v)
    {
        cout << x << endl;
    }
    if(v[0]+v[1] == v[2])
    {
        cout << "RIGHT" << endl;
    } */
}
