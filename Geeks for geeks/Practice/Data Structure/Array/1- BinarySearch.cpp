// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;

class Solution {
        public: 
        int binarySearch(int arr[], int n , int k)
        {
                int start  = 0 ;
                int end = n - 1 ;
                while (start <= end)
                {
                        int mid = start + (end - start) / 2 ;
                        if (arr[mid] == k) {
                                return mid;
                        }
                        else if (arr[mid] > k) {
                                end = mid - 1 ;
                        }
                        else {
                                start = mid + 1 ;
                        }
                }
                return - 1;
        }
};

int main()
{
        int testcases ;
        cin >> testcases ;
        while(testcases--) {
                int n ;
                cin >> n ;
                int arr[n] ;
                for (int i = 0 ; i < n ; i++)
                {
                        cin >> arr[i] ;
                }
                int key ;
                cin >> key ;
                Solution ob ;
                int found = ob.binarySearch(arr, n , key) ;
                cout << found << endl ;
        }
        return 0 ;
}