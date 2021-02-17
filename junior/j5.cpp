#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int m {}, n {}, k {};
    cin >> m >> n >> k;

    bool board[m][n]{0};



    for (int i {}; i < k; i++) {
        string r_or_c {};
        int num {};
        cin >> r_or_c >> num;
        num --;
        if (r_or_c == "R") {
            for (int j {}; j < n; j++) {
                if (board[num][j] == 0) {
                    board[num][j] = 1;
                } else {
                    board[num][j] = 0;
                }
            }
        } else {
            for (int j {}; j < m; j++) {
                if (board[j][num] == 0) {
                    board[j][num] = 1;
                } else {
                    board[j][num] = 0;
                }
            }
        }

    }
    
    
    int count {};
    for (int i {}; i < m; i++) {
        for (int j {}; j < n; j++) {
            if (board[i][j] == 1) {
                count ++;
            }
        }
    }
    cout << count << endl;

    return 0;
}