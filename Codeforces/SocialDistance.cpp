    #include <bits/stdc++.h>
    using namespace std;
     
    //vector<booL> inital
    pair<bool, int> checkOK(string s, int i, int k) {
            int start = i - k;
            int end = i + k;
     
            if (i - k < 0) start = 0;
            if (i + k > s.size() - 1) end = s.size() - 1;
     
            // pair<bool, int> ans = make_pair(true, -1);
     
            for (int t = start; t <= end; t++) {
                    if (s[t] == '1') {
                            return make_pair(false, t);
                            break;
                    }
            }
     
            return make_pair(true, -1);
    }
     
    int main() {
            ios_base::sync_with_stdio(0);
            cin.tie(0);
            
            int t;
            cin >> t;
            while (t--) {
                    int n, k;
                    cin >> n >> k;
                    int count = 0;
                    string s;
                    cin >> s;
     
                    for (int i = 0; i < s.size();) {
                            if (s[i] == '0') {
                                    pair<bool, int> res = checkOK(s, i, k);
                                    if (res.first == true) {
                                            s[i] = '1';
                                            count++;
                                            i += k + 1;
                                    } else {
                                            if (res.first == false) {
                                                    if (res.second < i) i++;
                                                    if (res.second > i) i += k + 1;
                                            }
                                    }
                            } else i += k + 1;
                    }
                    cout << count << endl;
            }
            return 0;
    }