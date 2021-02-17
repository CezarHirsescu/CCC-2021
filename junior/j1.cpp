#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int b {};
    cin >> b;
    int p {};
    p = 5 * b - 400;
    cout << p << endl;
    if (p < 100) {
        cout << "1";
    } else if (p > 100) {
        cout << "-1";
    } else {
        cout << "0";
    }
    cout << endl;
    return 0;
}