#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n = 0;
    int arr[500000] {};
   
    char c = 0;
    do {
        c = getchar();
        if (c == '\n') {
            break;
        }

        if (c == 'L') {
            arr[n] = 2;
        // } else if (c == 'M') {
        //     arr[n] = 2;
        } else if (c == 'S') {
            arr[n] = 1;
        }
        n ++;
    } while(c!='\n');

    int swap_count {};

    for (int i {}; i < n; i++) {
        int temp {};
        int minloc{i};
        
        if (arr[i] == 3) continue;

        for (int j {n-1}; j <=0; j--) {
            if (arr[j] == ) {
                minloc = j;
            }
        }

        if (minloc != i) {
            temp = arr[minloc];
            arr[minloc] = arr[i];
            arr[i] = temp;
            swap_count++;
        }
    }

    cout << swap_count << endl;


    return 0;
}