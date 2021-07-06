#include <bits/stdc++.h>
using namespace std ;

class Solution {
        public:
        vector<string> findRestaurant (vector<string> &list1, vector<string> &list2) {
                vector<string> ans ;
                int n = list1.size() ;
                int m = list2.size() ;
                map<string, int> sumPair ;
                for (int i = 0 ; i < n ; i++) {
                        for (int j = 0 ; j < m ; j++) {
                                if (list1[i] == list2[j]) {
                                        sumPair.insert({list1[i], (i + j + 2)}) ;
                                }
                        }
                }
                int minn = INT_MAX ;
                for (auto x : sumPair) {
                        if (x.second < minn) {
                                minn = x.second ;
                        }
                }
                for (auto x : sumPair) {
                        if (x.second == minn) {
                                ans.push_back(x.first) ;
                        }
                }
                return ans ;
        }
};

int main()
{
        Solution sol ;
        int n , m ;
        cin >> n >> m ;
        vector<string> list1(n) , list2(m) ;
        for (auto &x : list1) {
                cin >> x ;
        }
        for (auto &x : list2) {
                cin >> x ;
        }
        vector<string> ans = sol.findRestaurant(list1, list2);
        for(auto x : ans) {
                cout << x << " " ;
        }
        cout << endl ;
        return 0 ;
}