#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {

    long long n, m, ans = 0, temp = 0, boxes = 0, sticks = 0, i = 0;
    cin >> n >> m;

    vector<pair<long long, long long>> c(m);
    vector<long long> indexSum(m);

    for (int i = 0; i < m; i++) {
        cin >> c[i].first >> c[i].second;
    }

    for (int i = 0; i < m; i++) {
        temp = c[i].first;
        c[i].first = c[i].second;
        c[i].second = temp;
    }

    sort(c.begin(), c.end(), reverse<int>());
    //10 2  2
    //8 3   5
    //6 3   8   7
    //5 2   10


    for (int i = 0; i < m; i++) {
        (i == 0) ? indexSum[i] = c[0].second : indexSum[i] = indexSum[i - 1] + c[i].second;
    }
    auto it = upper_bound(indexSum.begin(), indexSum.end(), n);

    for (auto itr = indexSum.begin(), i = 0; itr != it - 1; itr++, i++) {
        ans += c[i].first * c[i].second;
    }


    cout << *s.end() << endl;
    return 0;


    // 5 5 = 25
    // 3 9 = 27
    // 4 8 = 32


    //one container contains ai match boxes up to 10^18
    //one match box contains bi match sticks up to 10
    //there are m containers
