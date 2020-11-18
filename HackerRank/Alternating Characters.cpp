#include <bits/stdc++.h>
using namespace std ;

void solve() 
{
    string s ;
    int ans = 0 , current = 0 ;
    cin >> s ;
    current = s.size() ;
    int countA = count(s.begin(), s.end(), 'A') ;
    int countB = count(s.begin(), s.end(), 'B') ;
    if (countA == s.size()) {
        cout << s.size() - 1 << endl ;
    }
    else if (countB == s.size()) {
        cout << s.size() - 1 << endl ;
    }
    else {
        for(int i = 0 ; i < s.size() ;) {
            if(s[i] == s[i+1]){
                s.erase(s.begin() + i) ;
            }
            else{
                i++ ;
                ans ++ ;
            }
        }
        cout << current - s.size() << endl ;
    }
    // cout << s << endl ;
}

int main()
{
    int testcases ;
    cin >> testcases ;
    while(testcases --)
    {
        solve() ;
    }
    return 0 ;   
}