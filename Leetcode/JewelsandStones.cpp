// In the name of Aadi Shakti
// You are everything and I am nothing
// Jai Mata Di 

//https://leetcode.com/problems/jewels-and-stones/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int cnt = 0 ; 
        int len1 = J.size() ;
        int len2 = S.size() ;
        for(int i = 0 ; i < len1 ; i++ )
        {
            for(int j = 0 ; j < len2 ; j++)
            {
                if(J[i] == S[j]) {
                    // cout << S[i] << " ";
                    cnt++ ;
                }
            }
        }

        return cnt ;
    }
};

int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;

    Solution s ;

    string jewel , str ;
    cin >> jewel >> str ;

    int n = s.numJewelsInStones(jewel, str) ;
    cout << n << endl ;

    return 0 ;
}