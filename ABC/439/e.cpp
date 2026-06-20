#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

// example Answer
// 全体方針.
// 1. a-b座標系に置き換えて、LIS(Longest Increase Subsequence: 最長増加部分列)に帰着させる.
// 2. aの昇順にbを見ていく（aに対するbのLISをみる）
// LISの方法
// dp[i][j] = iまで見たときに、長さjの増加列の末尾のminになるbを入れていく

// 使用文法
// array.rbegin, rend

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> ab;
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        ab.emplace_back(-a, b);
    }

    sort(ab.rbegin(), ab.rend());
    rep(i, n) cout << ab[i].first << " " << ab[i].second << endl;
    vector<int> b;
    rep(i, n) b.push_back(ab[i].second);

    const int INF = 1001001001;
    vector<int> dp(n+1, INF); dp[0] = -1;
    int ans = 0;
    for(int nb: b) {
        int i = lower_bound(dp.begin(), dp.end(), nb)  - dp.begin();
        dp[i] = nb;
        ans = max(ans, i);
    }
    cout << ans << endl;
    return 0;
}
