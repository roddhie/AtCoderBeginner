#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
using namespace std;

int calc(int n) {
    int forth,third,second, first;
    first   = n%10;
    second  = n/10%10;
    third   = n/100%10;
    forth   = n/1000;
    return first*first + second*second + third *third + forth*forth;
}

int main() {
    int N,newN;
    cin >> N;
    vector<int> T;
    T.push_back(0);
    bool isHappy = true;

    while(isHappy == true) {
        newN = calc(N);
        if (*find(T.begin(), T.end(), newN) == newN){
            isHappy = false;
        } else if(newN != 1) {
            T.push_back(newN);
            N = newN;
        } else {
            break;
        }
    }

    string Ans = isHappy ? "Yes" : "No";
    cout << Ans << endl;
    
    return 0;
}
