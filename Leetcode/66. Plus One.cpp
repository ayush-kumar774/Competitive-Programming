#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
        vector<int> plusOne(vector<int>& digits) {
                string s = "" ;
                int n = (int)digits.size() ;
                for (auto x : digits)
                {
                        s += to_string(x) ;
                }
                if (s[n - 1] == '9')
                {
                        int lastIndex = (int)s.size() ;
                        int f = -1 ;
                        for (int i = lastIndex - 1 ; i >= 0 ; i--)
                        {
                                if (s[i] != '9') {
                                        f = i ;
                                        break ;
                                }
                        }
                        // cout << "Size " << s.size() << endl ;
                        // cout << "F " << f << endl ;
                        if (f == -1) {
                                s = "1" ;
                                for (int i = 0 ; i < lastIndex ; i++) {
                                        s += "0" ;
                                }
                        }
                        else {
                                for (int i = lastIndex - 1 ; i > f ; i--) {
                                        s[i] = '0' ;
                                }
                                int res = ((s[f] - '0') + 1 ) ;
                                s[f] = (char) (res + 48) ;
                        }
                }
                else {
                        int res = ((s[n - 1] - '0') + 1 ) ;
                        s[n - 1] = (char) (res + 48) ;
                }
                digits.clear() ;
                for (int i = 0 ; i < (int) s.size() ; i++)
                {
                        digits.push_back((s[i] - '0')) ;
                }
                return digits;
        }
};

int main()
{
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for(auto &x : v) {
                cin >> x ;
        }
        Solution sol ;
        vector<int> res = sol.plusOne(v) ;
        for(auto x : res) {
                cout << x << " " ;
        }
        cout << endl ;
        return 0 ;
}