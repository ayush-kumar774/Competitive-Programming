// 255 out of 300
#include <bits/stdc++.h>
using namespace std;
bool alternatingSort(std::vector<int> a) {
    int n = a.size();
    std::vector <int> b(n);
    b[0] = a[0] ;
    int j = n - 1 ;
    for (int i = 1 ; i < n ; i += 2) {
        b[i] = a[j] ;
        j-- ;
    }
    j = 1 ;
    for (int i = 2 ; i < n ; i += 2) {
        b[i] = a[j] ;
        j++ ;
    }
    
    if (is_sorted(b.begin(), b.end()) )  return true ;
    else return false ;
}
int main() {
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for (auto &x : v) cin >> x ;
    cout << alternatingSort(v) << endl ;
    return 0;
}
// 7 test cases failed
// Input:
// a: [-92, -23, 0, 45, 89, 96, 99, 95, 89, 41, -17, -48]
// ouput true 
// expected false
