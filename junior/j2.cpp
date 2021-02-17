#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n {};
    cin >> n;
    string name {};
    int bid {};
    int highest_bid {-1};
    
    string highest_bider {};
    for (int i {}; i < n; i++) {
        cin >> name >> bid;
        if (bid > highest_bid) {
            highest_bider = name;
            highest_bid = bid;
        }
    }
    cout << highest_bider << endl;
    return 0;
}