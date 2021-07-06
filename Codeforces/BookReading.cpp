//https://codeforces.com/contest/1213/problem/C
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int testcase ;
    cin >> testcase ;
    while(testcase -- )
    {
        long long sum = 0, N;
        int n , m ;
        cin >> n >>  m ;

        N = n / m;
        sum = ((N / 10)* ((N / 10) + 1) * m) / 2;
        cout << sum << endl ;
    }
}
