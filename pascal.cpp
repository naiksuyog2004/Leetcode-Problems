#include <iostream>
#include <vector>
using namespace std;

int main() {

    // particular element
    // int r, c;
    // cout << "Enter row and col no.: ";
    // cin >> r >> c;

    // r -= 1;
    // c -= 1;

    // long long res = 1;
    // for(int i = 0; i < c; i++) {
    //     res *= (r - i);
    //     res /= (i + 1);
    // }

    // cout << res << endl;


    //particular row
    // int r;
    // cout << "Enter row: ";
    // cin >> r;

    // vector <int> v;
    // long long ans = 1;

    // v.push_back(ans);
    // for(int i=1; i<r; i++) {
    //     ans *= (r - i);
    //     ans /= i;
    //     v.push_back(ans);
    // }
    

    // for(auto it: v) cout << it << " ";

    //complete triangle
    int r;
    cout << "Enter row: ";
    cin >> r;

    vector<vector<int>> ans;

    for(int i=1; i<=r; i++) {
        vector <int> v;
        long long res = 1;

        v.push_back(res);
        for(int j=1; j<i; j++) {
            res *= (i - j);
            res /= j;
            v.push_back(res);
        }

        ans.push_back(v);
    }

    for(int i=0; i<r; i++) {
        for(int j=0; j<=i; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}
