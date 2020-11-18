// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        //vector<int> finalPrices ;
        for(int i = 0 ; i < prices.size() ; i++)
        {
            for(int j = i + 1 ; j < prices.size() ; j++)
            {
                if (prices[i] >= prices[j]) {
                    prices[i] -= prices[j] ;
                    break ;
                }
            }
        }
        return prices ;
    }
};

int main()
{
    int n ;
    cin >> n ;
    vector<int> prices(n) , ans;
    for(auto &x : prices ) cin >> x ;

    Solution s ;
    ans = s.finalPrices(prices) ;
    for(auto x : ans ) cout << x << " " ;
    cout << endl ;
}