#include <bits/stdc++.h>
using namespace std;
// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) {
    int highest = 0;
    int lowest = 0;
    int count_high = 0;
    int count_low = 0;
    for(vector<int>::iterator itr = scores.begin(); itr != scores.end(); itr++)
    {
        if(*itr > highest)
        {
            count_high++;
            highest = *itr;
        }

        if(*itr < lowest)
        {
            count_low++;
            lowest = *itr;
        }
    }
    vector<int> ans = {count_high, count_low};
    return ans;

}

int main()
{
    int n , x;
    cin >> n;
    vector<int> V;
    for (int i = 0 ; i< n; i++)
    {
        cin >> x;
        V.push_back(x);
    }
        vector<int> answer = breakingRecords(V);
        for(int p: answer)
        {
            cout << p << " ";
        }

}
