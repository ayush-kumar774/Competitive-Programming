#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
        vector<string> summaryRanges(vector<int> &nums)
        {
                vector<string> summaryRanges;
                int n = (int)nums.size();
                if (n == 0)
                {
                        return summaryRanges;
                }
                if (n == 1) 
                {
                        summaryRanges.push_back(to_string(nums[0]));
                        return summaryRanges;
                }
                string temp = "";
                int startRange = INT_MAX, endRange = INT_MAX;
                startRange = nums[0];
                for (int i = 1; i < n; i++)
                {
                        if (nums[i] == nums[i - 1] + 1)
                        {
                                endRange = nums[i];
                                //cout << "Executing if condition for element " << nums[i] << endl ;
                                if (i == n - 1) 
                                {
                                        if (startRange == nums[i])
                                                summaryRanges.push_back(to_string(nums[i]));
                                        else 
                                                summaryRanges.push_back((to_string(startRange) + "->" + to_string(endRange)));
                                }
                        }
                        else
                        {
                                //cout << "Executing else condition for element " << nums[i] << endl ;
                                // cout << "Starting Range -> " << startRange << " Ending Range -> " << endRange << endl ;
                                if (endRange != INT_MAX) { 
                                        temp += to_string(startRange) + "->" + to_string(endRange);
                                        summaryRanges.push_back(temp);
                                }
                                else if (endRange == INT_MAX) {
                                        temp += to_string(startRange);
                                        summaryRanges.push_back(temp);
                                }
                                startRange = nums[i];
                                endRange = INT_MAX;
                                if (i == n - 1)
                                {
                                        if (startRange == nums[i])
                                                summaryRanges.push_back(to_string(nums[i]));
                                        else 
                                                summaryRanges.push_back((to_string(startRange) + "->" + to_string(endRange)));
                                }
                                temp = "";
                        }
                }
                return summaryRanges;
        }
};

int32_t main()
{
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &x : nums)
        {
                cin >> x;
        }
        Solution sol;
        vector<string> ans = sol.summaryRanges(nums);
        for (auto x : ans)
        {
                cout << x << endl ;
        }
        return 0;
}