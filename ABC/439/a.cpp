#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
using namespace std;

int main() {
    // int N, power2 = 1;
    // cin >> N;
    // rep1(i, N) power2 *= 2;
    int N, power2;
    cin >> N;
    // power2 = 1 <<N;
    

    cout << (1 << N) -N*2 << endl;
    return 0;
}
