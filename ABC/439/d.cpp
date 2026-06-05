#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

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
