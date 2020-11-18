//https://codeforces.com/contest/677/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    long long int n , h , count = 0 ;
    cin >> n >> h ;
    while(n--)
    {
        int x ;
        cin >> x ;
        if(x <= h)
        {
            count ++;
        }
        else if (x > h)
        {
            count+=2;
        }
    }

    cout << count << endl;
}
