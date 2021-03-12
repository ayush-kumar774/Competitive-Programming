#include <bits/stdc++.h>
using namespace std ;

class Solution {
        public:

        int maximumWealth(vector<vector<int>> & accounts) {
                int maxx = INT_MIN ;
                for(int i = 0; i < accounts.size() ; i++) {
                        int sum = 0 ;
                        for (int j = 0 ; j < accounts[i].size() ; j++) {
                                sum += accounts[i][j] ;
                        }
                        maxx = max(maxx, sum);
                }
                return maxx ;
        }
};

int main()
{
        int n, m ;
        cin >> n >> m ;
        vector<vector<int>> accounts(n, vector <int> (m, 0));
        for (auto &x : accounts) {
                for (auto &y : x) {
                        cin >> y ;
                }
        }
        Solution sol ;
        cout << sol.maximumWealth(accounts) << endl ;
        return 0 ;
}