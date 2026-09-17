#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ull = unsigned long long;

const ull maxL = 1'000'000'000;
int main() {
    int N;
    cin >> N;
    map<ull, ull> TT;
    rep(i, N) {
        ull H, L;
        cin >> H >> L;
        L--;
        TT[L] = max(TT[L], H);
    }
    // TTに対して、Lの降順LとHのテーブルを作成する
    vector<ull> HT;
    vector<ull> LT;
    ull maxL = 0ULL;

    for(auto i = TT.rbegin(); i != TT.rend(); ++i) {
        maxL = max(maxL, i->second);
        HT.push_back(i->first);
        LT.push_back(i->second);
    }

    reverse(HT.begin(), HT.end());
    reverse(LT.begin(), LT.end());

    rep(i, LT.size()) cout << LT[i] << ", " << HT[i] << endl;

    int Q;
    cin >> Q;
    vector<ull> Ans(Q, ull(0ULL));
    rep(i, Q) {
        ull T;
        cin >> T;
        auto index = upper_bound(LT.begin(), LT.end(), T) - LT.begin();
        Ans.push_back(HT[index]);
        // cout << HT[index] << endl;
    }
    rep(i, Q) cout << Ans[i] << endl;
    return 0;
}
