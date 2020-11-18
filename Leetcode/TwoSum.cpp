#include<bits/stdc++.h>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> v(2);
     for(int i = 0; i < nums.size(); i++)
     {
         for(int j = i+1; j < nums.size(); j++)
         {
             if (nums[i]+ nums[j] == target)
                {
                    v[0] = i ;
                    v[1] = j;
                     break;
                }

        }

     }
        // for(auto x: v)
        // {
        //     cout << x << endl;
        // }
       return v ;
    }
int main()
{
    vector<int> s(4);
    for(auto &x:s)
    {
        cin >> x ;
    }
    int target;
    cin >> target;
    twoSum(s, target);
}
