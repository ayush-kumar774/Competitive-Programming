// 1 test case failed (TLE)
#include <bits/stdc++.h>
using namespace std;
long long concatenationsSum(std::vector<int> a) {
        uint64_t sum = 0 ;
        int n = a.size(); 
        //int counter =  1 ;
        for (int i = 0 ; i < n ; i++) {
                for (int j = 0 ; j < n ; j++) {
                        string ans = to_string(a[i]) ;
                        ans += to_string(a[j]) ;
                        long long num = stoi(ans);
                        //cout << ans << endl ;
                        sum += num ;
                }
        }
        //cout << sum << endl ;
        return sum ;
}
int main() {
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for (auto &x : v) cin >> x ;
        cout << concatenationsSum(v) << endl ;
        return 0;
}