#include <iostream>
using namespace std;

signed main() {
    int n;
    cin >> n;

    vector<int> ans;

    for(int i = n; i >= 1; --i) {
        if(n % i == 0) {
            ans.push_back(i);
        }
    }

    reverse(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
}
