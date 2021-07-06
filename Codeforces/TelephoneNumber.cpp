//http://codeforces.com/problemset/problem/1167/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int num ;
    cin >> num ;
    int count = 0 ;
    while(num--)
    {
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        n = n - 11 ;
        for(int i = 0 ; i <= n ; i++)
        {
            if(s[i] == '8')
            {
                count++;
            }
        }
        if(count == 0)
            cout << "NO" <<endl ;
        else
            cout << "YES" << endl ;
        count = 0 ;
    }
}
