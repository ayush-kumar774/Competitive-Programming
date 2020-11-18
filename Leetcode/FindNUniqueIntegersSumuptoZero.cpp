// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    std::vector<int> sumZero(int n) {
        vector<int> sumZero ;
        if(n == 2) {
            sumZero.push_back(-1) ;
            sumZero.push_back(1) ;
            return sumZero ;
        }
        else if(n == 3)
        {
            sumZero.push_back(-1);
            sumZero.push_back(0);
            sumZero.push_back(1);
            return sumZero ;
        }
        else
        {
            int sum = 0 ;
            for(int i = 0 ; i <= n - 2 ; i++) {
                sum += i ;
                sumZero.push_back(i);
            }
            sumZero.push_back(sum * -1) ;

            return sumZero ;
        }
        
    }
};

int main()
{
    int n ;
    cin >> n ;
    vector<int> nums ;
    //for(auto &x :nums) cin >> x ;

    Solution s ;
    nums = s.sumZero(n) ;
    for(auto x : nums) cout << x << " ";
    cout << endl; 
    return 0 ;
}