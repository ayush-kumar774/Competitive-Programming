//https://codeforces.com/problemset/problem/268/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number, count = 0;
    cin >> number;
    vector<int> A(number), B(number);
    for(int i = 0; i< number; i++)
        cin >> A[i] >> B[i];
    for(auto X: A)
        for(auto Y: B)
    {
        if( X == Y )
            count++;
    }
    cout << count;
    return 0;
}
/*
#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int size;
    cin >> size;
    int count{0};

    int a[size];
    int b[size];
    for (int i = 0; i < size; ++i) {

        cin >> a[i] >> b[i];

    }


    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j) {
            if (a[i] == b[j]) {
                count++;
            }
        }
    cout << count;

    return 0;

}
*/
