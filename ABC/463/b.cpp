#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int N; char X;
    cin >> N >> X;
    int index = X == 'A' ? 0: X== 'B'? 1: X=='C'? 2: X=='D'? 3: 4;
    bool Ans = false;
    rep(i, N) {
        string S;
        cin >> S;
        if( S[index] == 'o') {
            Ans = true;
            break;
        }
    }

    if(Ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
