// Problem : Buttons(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1858/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if(a == b) {
            if(c%2 == 0) {
                cout << "Second\n";
            } else {
                cout << "First\n";
            }
        } else {
            if(a > b) {
                cout << "First\n";
            } else {
                cout << "Second\n";
            }
        }
    }
}