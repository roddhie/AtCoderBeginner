#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

// vector型、pair型、sort
// int main() {
//     int N;
//     cin >> N;
//     vector<pair<int, int>> T;
//     rep(i, N) {
//         int t;
//         cin >> t;
//         pair<int, int> horse(t, i+1);
//         T.push_back(horse);
//     }

//     sort(T.begin(), T.end());
//     rep(i,3) cout << T[i].second << endl;

//     return 0;
// }

// lambda expression
int main() {
    int N;
    cin >> N;
    vector<int> T(N), t(N);
    rep(i, N) {
        cin >> T[i];
        t[i] = i+1;
    }
    sort(t.begin(), t.end(), [&](int i, int j) {return T[i] < T[j];});
    
    return 0;
}