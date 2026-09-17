#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

// int calc(int n) {
//     int forth,third,second, first;
//     first   = n%10;
//     second  = n/10%10;
//     third   = n/100%10;
//     forth   = n/1000;
//     return first*first + second*second + third *third + forth*forth;
// }

// int main() {
//     int N,newN;
//     cin >> N;
//     vector<int> T;
//     T.push_back(0);
//     bool isHappy = true;

//     while(isHappy == true) {
//         newN = calc(N);
//         if (*find(T.begin(), T.end(), newN) == newN){
//             isHappy = false;
//         } else if(newN != 1) {
//             T.push_back(newN);
//             N = newN;
//         } else {
//             break;
//         }
//     }

//     string Ans = isHappy ? "Yes" : "No";
//     cout << Ans << endl;
    
//     return 0;
// }

int f(int n) {
    int res = 0;
    while (n ) {
        int d = n%10;
        res += d*d;
        n /= 10;
    }
    return res;
}

// mohan kaito
int main() {
    int n;
    cin >> n;

    rep(i, 1000) n = f(n);

    if(n == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
