// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int number)
    {
        long long fib[number + 1];
        fib[0] = 0;
        fib[1] = 1;
        for (long long i = 2; i <= number; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        vector<long long> printFibb(fib + 1, fib + number + 1);
        return printFibb;
    }
};

// { Driver Code Starts.
int main()
{
    // taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        // taking number of elements
        int n;
        cin >> n;
        Solution obj;
        // calling function printFibb()
        vector<long long> ans = obj.printFibb(n);

        // printing the elements of vector
        for (long long i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends