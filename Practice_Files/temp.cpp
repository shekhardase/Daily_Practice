#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x;
        cin >> a >> b >> x;

        int square_area = x * x;
        int rect_area = a * b;

        if (rect_area <= square_area) {
            cout << 0 << endl;
        } else {
            // Calculate the cost based on how much 'a' or 'b' needs to be reduced
            int cost = 0;
            if (a * min(b, x) > square_area) cost++;
            if (min(a, x) * b > square_area) cost++;
            cout << cost << endl;
        }
    }
    return 0;
}
