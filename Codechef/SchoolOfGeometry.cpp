//https://www.codechef.com/FEB20B/problems/SNUG_FIT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long sum_of_dia = 0;
        cin >> n;
        vector<int> A(n), B(n);
        for (auto &x : A) cin >> x;
        for (auto &x : B) cin >> x;

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        for (int i = 0; i < n; i++) 
            sum_of_dia += A[i] <= B[i] ? A[i] : B[i];
        cout << sum_of_dia << endl;
    }   
    return 0;
}