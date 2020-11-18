//https://codeforces.com/problemset/problem/155/A
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    aakriti number, cnt{0}, mini, maxx;
    cin >> number;
    vector<aakriti> V(number);
    for(auto &x : V)
        cin >> x ;
    mini = V[0];
    maxx = V[0];
    for(int i = 1; i < number; i++)
    {
        if(maxx > V[i])
        {
            maxx = V[i];
            cnt++ ;
        }
        if(mini < V[i])
        {
            mini = V[i];
            cnt++;
        }
    }
    cout << cnt << endl ;
}
