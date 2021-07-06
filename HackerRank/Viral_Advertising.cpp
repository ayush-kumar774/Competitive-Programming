#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n, int value) {

    int sum = 0;
    while(n--)
    {
        sum += value / 2;
        value = (value / 2) * 3;
    }

  return sum;
}

int main()
{

    int n, value = 5;
    cin >> n;

    int result = viralAdvertising(n, value);

    cout << result << "\n";

    return 0;
}
