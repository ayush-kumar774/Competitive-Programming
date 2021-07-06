#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string toLowerCase(string str) {
        transform(str.begin(), str.end(), str.begin(), ::tolower);  
        // cout << str << endl ; 
        return str ;   
    }
};

int main()
{
    string s ;
    cin >> s ;

    Solution st ;
    st.toLowerCase(s) ;
}