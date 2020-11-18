#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int len = candies.size();
        vector<bool> kidsWithCandies(len);
        
        //cout << "Length is " << len << endl ;

        int maxx = 0 ;
        for(int i = 0 ; i < len; i++)
        {
            if(maxx < candies[i]) maxx = candies[i] ;
        }

        //cout << "maxx is " << maxx << endl ;
        
        for(int i = 0 ; i < len ; i++)
        {
            if(candies[i] + extraCandies >= maxx) 
            {
                kidsWithCandies[i] = true ;
            }    
            else kidsWithCandies[i] = false ;
        }

        // for(auto x : kidsWithCandies) cout << x << " "; 
        
        // cout << endl ;
        return kidsWithCandies ;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    Solution s;
    vector<int>candies(3);
    vector<bool>v(3);
    for(auto &x : candies) cin >> x ;
    int extraCandies ;
    cin >> extraCandies ;
    v = s.kidsWithCandies(candies, extraCandies);
    for(auto X : v) cout << X << " " ;
    cout << endl; 
}