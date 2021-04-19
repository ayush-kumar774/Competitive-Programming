#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
        string addStrings(string str1, string str2)
        {
                if (str1.length() > str2.length()) 
                {
                        swap(str1, str2);
                } 
                string str = ""; 
                int n1 = str1.length(), n2 = str2.length(); 
                int diff = n2 - n1; 

                int carry = 0; 

                for (int i=n1-1; i>=0; i--) 
                { 

                        int sum = ((str1[i]-'0') + (str2[i+diff]-'0') + carry); 
                        str.push_back(sum%10 + '0'); 
                        carry = sum / 10; 
                } 
        

                for (int i=n2-n1-1; i>=0; i--) 
                { 
                        int sum = ((str2[i]-'0')+carry); 
                        str.push_back(sum%10 + '0'); 
                        carry = sum/10; 
                } 
        

                if (carry) 
                {        
                        str.push_back(carry+'0');
                } 
                reverse(str.begin(), str.end()); 
        
                return str; 
        }
        vector<int> addToArrayForm(vector<int>& A, int k) {
                string num1 = "" ;
                for(auto x : A) {
                        num1 += to_string(x) ;
                }
                string num2 = to_string(k) ;
                string sum = addStrings(num1, num2) ;
                //cout << sum << endl ;
                vector<int> res  ;
                for(auto x : sum) {
                        res.push_back(x - 48) ;
                }
                return res ;
        }
};

int main() 
{
        int n , k ;
        cin >> n ;
        vector<int> nums(n) ;
        for(auto &x : nums) {
                cin >> x ;
        }
        cin >> k ;
        Solution sol ;
        vector<int> sum ;
        sum = sol.addToArrayForm(nums, k) ;
        for (auto x : sum) {
                cout << x << " " ;
        }
        cout << endl ;
        return 0 ;
}