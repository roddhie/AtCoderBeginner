#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    ll ans = 0;

    // // example 1
    // // 1.Aiごとのindex配列を作る.
    // map<int,vector<int>> mp;
    // rep(i, n) mp[a[i]].push_back(i);

    // // 2.1の数字ごとに、その{7:5:3}の組を捜査していく
    // for(auto p: mp) {
    //     if(p.first%7 != 0) continue;
    //     int x = p.first/7;

    //     // xを基準に、7:5:3になるAiのみを取り出して格納する配列s 
    //     vector<int> s;
    //     // 上述の配列に入れる、Aiのindexとその割合をペアとする配列 ps
    //     vector<pair<int , int>> ps;
    //     for(int c: {7, 5, 3}) {
    //         for(int i: mp[c*x]) ps.emplace_back(i, c);
    //     }
    //     // psは与えられた配列Aとは順番が異なるのでソートする
    //     sort(ps.begin(), ps.end());
    //     for(auto np: ps) s.push_back(np.second);

    //     rep(ri,2) {
    //         ll c3 = 0, c7 = 0;
    //         for(int c: s) {
    //             if(c == 3) c3 ++;
    //             if(c == 7) c7 ++;
    //             if(c == 5) ans += c3*c7;
    //         }
    //         reverse(s.begin(), s.end());
    //     }
    // }

    // example2 1の処理をまとめて実行する
    rep(ri, 2) {
        map<int, int> cnt;
        for(int na: a) {
            // 配列Anを読み込みながらAi毎の数をカウントする
            cnt[na]++;
            // 5になるAiの場合に、それまでの3,7の数を掛け合わせる
            if(na%5 == 0) {
                int x = na/5;
                ans += (ll)cnt[x*3]*cnt[x*7];
            }
        }
        reverse(a.begin(), a.end());
    }

    cout << ans <<endl;
    return 0;
}


// give up (TLE & WA)
// int main() {
//     int N, Ans =0;
//     cin >> N;
//     int an[N] = {};
//     rep(i, N) cin >> an[i];
    
//     rep(j, N) {
//         if(an[j]%5 == 0) {
//             int aj = an[j];
//             int ai = aj*7/5;
//             int ak = aj*3/5;
//             // j min
//             if(j < N-3) {
//                 for (int i = j+1; i< N; i++) {
//                     if(an[i] == ai) {
//                         for(int k = j+1; k<N; k++) {
//                             if(an[k] == ak) Ans++;
//                         }
//                     }
//                 }
//             }
            
//             // j max
//             if(j > 1) {
//                 for (int i = 0; i< j; i++) {
//                     if(an[i] == ai) {
//                         for(int k = 0; k<j; k++) {
//                             if(an[k] == ak) Ans++;
//                         }
//                     }
//                 }
//             }

//         }
//     }
//     cout << Ans << endl;
//     return 0;
// }
