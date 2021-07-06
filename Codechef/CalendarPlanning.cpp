#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;
    long long n, m , k , cnt{0};
    cin >> m >> n >> k ;

    for(int i = m ; i <= n ; i++)
    {
        string s = to_string(i) ;
        reverse(s.begin(), s.end() ) ;
        //cout << i << " " << s << endl ; 
        long long rev = stoi(s) ;
        if((i - rev) % k == 0){
            cnt++;
        }
    }

    cout << cnt << endl ;
}