// In the name of Aadi Shakti
// You are everything and I am nothing
// Jai Mata Di 

//https://leetcode.com/problems/defanging-an-ip-address/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        int a = address.size();
        string ans = "" ;
        for(int i = 0 ; i < a ; i++)
        {
            if(address[i] == '.') ans += "[.]" ;
            else ans += address[i] ;
        }
        return ans ;
    }
};


int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;
    Solution s ;
    string str ; 
    cin >> str ;
    string res ;
    res = s.defangIPaddr(str) ;
    cout << res << endl; 
    return 0 ; 
}