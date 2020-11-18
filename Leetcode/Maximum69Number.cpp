#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maximum69Number (int num) {
        string s ;
        s = to_string(num) ;
        int flag ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '6') {
                    s[i] = '9' ;
                    break ;
                }                

        }
        num = stoi(s) ;
        return num ;
    }
};

int main()
{
    int n ;
    cin >> n ;

    Solution s ;
    cout << s.maximum69Number(n) << endl ;
}