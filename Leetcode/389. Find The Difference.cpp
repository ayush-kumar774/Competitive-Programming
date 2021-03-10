#include <bits/stdc++.h>
using namespace std ;

class Solution
{

public:
        char findTheDifference(string s, string t) {
                string alphabets = "abcdefghijklmnopqrstuvwxyz" ;
                int freq1[26] , freq2[26] ;
                int ans = 0 ;
                for(int i = 0 ; i < 26 ; i++) {
                        freq1[i] = freq2[i] = 0 ;
                }
                for(auto x : s) {
                        freq1[x - 'a']++ ;
                }
                for(auto x : t) {
                        freq2[x - 'a']++ ;
                }
                for (int i = 0 ; i < 26 ; i++) {
                        if (freq1[i] != freq2[i]) {
                                ans = i ;
                                break ;
                        }
                }
                return (alphabets[ans]) ;
        }
};

int main() 
{
        string s ;
        string t ;
        cin >> s ;
        cin >> t ;
        Solution sol ;
        char ans = sol.findTheDifference(s, t) ;
        cout << ans << endl ;
        return 0 ;
}