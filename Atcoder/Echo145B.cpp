//https://atcoder.jp/contests/abc145/tasks/abc145_b
#include<bits/stdc++.h>
using namespace std;
#define aakriti long long int
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        if(s.size() % 2 == 0)
        {
                set<char> S;
                for (size_t i = 0; i < s.size(); i++)
                {
                        S.insert(s[i]);
                }
                if(s.size() / 2 == S.size()) cout << "Yes";
                else cout << "No" ;
        }
        else cout << "No";

     
            
}