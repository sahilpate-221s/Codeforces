#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> ans;
    string ans1;

    // Extracting digits '1', '2', and '3' from the string
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= '1' && s[i] <= '3') {
            ans.push_back(s[i] - '0');
        }
    }
    sort(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); i++) {
        ans1 += to_string(ans[i]);
        if(i < ans.size() - 1) {
            ans1 += "+";
        }
    }

    cout << ans1 << endl;

    return 0;
}
