#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << (1 << N) -N*2 << endl;
    return 0;
}
