// Problem : Target Practice(CodeForces)
// Rating : 800
// Problem link : https://codeforces.com/problemset/problem/1873/C

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        vector<string> target(10);
        
        for(int i = 0; i < 10; i++) {
            cin >> target[i];
        }
        
        int points = 0;
        
        vector<vector<int>> score = {{1,1,1,1,1,1,1,1,1,1},
         {1,2,2,2,2,2,2,2,2,1},
         {1,2,3,3,3,3,3,3,2,1},
         {1,2,3,4,4,4,4,3,2,1},
         {1,2,3,4,5,5,4,3,2,1},
         {1,2,3,4,5,5,4,3,2,1},
         {1,2,3,4,4,4,4,3,2,1},
         {1,2,3,3,3,3,3,3,2,1},
         {1,2,2,2,2,2,2,2,2,1},
         {1,1,1,1,1,1,1,1,1,1}};
        
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                if(target[i][j] == 'X') {
                    points += score[i][j];
                }
            }
        }
        
        cout << points << "\n";
    }
}