#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arrayA[N], arrayB[N], arraySum[N] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> arrayA[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> arrayB[i];
    }
    for (int i = 0; i < N; i++)
    {
        arraySum[i] = arrayA[i] + arrayB[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << arraySum[i] <<" ";
    }
}
