#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int flag = 0 ;
        if(target.size() != arr.size())
            return false ;
        else{
            sort(target.begin(), target.end() );
            sort(arr.begin(), arr.end() );
            for(int i = 0 ; i < target.size() ; i++)
            {
                if(arr[i] != target[i]) {
                    flag = 1 ;
                    break ;
                }
            }
            if(flag) return false ;
            else return true ;
        }
        
    }
};

int main()
{
    int n , m ;
    cin >> n >> m ;
    vector <int> arr(n) ;
    vector <int> target(m) ;
    for(auto &x : arr) cin >> x ;
    for(auto &x : target) cin >> x ;

    Solution s ;
    bool ans = s.canBeEqual(arr, target) ;
    cout << ans << endl ;
}