//https://codeforces.com/contest/1201/problem/A
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {

    int n, m, maxScore = 0;
    cin >> n >> m;

    vector<string> studentAnswers(n);
    vector<int> pointsForEachQuestion(m);

    for (int i = 0; i < n; i++) cin >> studentAnswers[i];
    for (int i = 0; i < m; i++) cin >> pointsForEachQuestion[i];


    for(int i = 0; i < m; i++) {
        vector<int> score(5);
        for (int j = 0; j < n; j++) {
                if (studentAnswers[j][i] == 'A') score[0]++;
                if (studentAnswers[j][i] == 'B') score[1]++;
                if (studentAnswers[j][i] == 'C') score[2]++;
                if (studentAnswers[j][i] == 'D') score[3]++;
                if (studentAnswers[j][i] == 'E') score[4]++;
        }

        maxScore += *max_element(score.begin(), score.end()) * pointsForEachQuestion[i];
    }
    cout << maxScore << endl;
    return 0;
}
