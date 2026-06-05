#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int N, k = 0;
    cin >> N;
    int ns[N+1] = {};
    int int_part = powf(N, 0.5);
    int powN[int_part] = {};
    rep(i, int_part) powN[i] = (i + 1)*(i + 1);
    for(int i = 0; i<int_part-1;i++) {
        for(int j = i+1; j<int_part;j++) {
            int ij = powN[i] + powN[j];
            // cout << "i: " << powN[i] << " j: " << powN[j] << " = " << ij << endl;
            if(ij <= N )ns[ij] = ns[ij] + 1;
        }
    }
    vector<int> an;
    rep(i,N+1) {
        // cout << "n: " << ns[i] << endl;
        if(ns[i] == 1) {
            k += 1;
            an.push_back(i);
        }
    }
    cout << k << endl;
    for(int a: an) {
        cout << a << endl;
    }
    

    return 0;
}
