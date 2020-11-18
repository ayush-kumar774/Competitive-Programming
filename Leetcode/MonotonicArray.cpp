#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        bool a = is_sorted(A.begin(), A.end()) ;
        
        vector<int> B ;

        for(int i = A.size() - 1 ; i >= 0 ; i--) {
            B.push_back(A[i]) ;
        }

        //for(auto x : B) cout << x << " " ;
        bool b = is_sorted(B.begin(), B.end()) ;

        if(a == false and b == false) {
            return false ;
        }
        else
        {
            return true ;
        }
        
    }
};

int main() {
    int n ;
    cin >> n ;

    vector<int> A(n) ;
    for(auto &x : A ) cin >> x ;

    Solution s ;
    cout << s.isMonotonic(A) << endl ;

    return 0 ;
}