https://www.codechef.com/problems/MEBA?tab=statement

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        unordered_set<int> unique_non_zero_elements;
        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            if (A[i] != 0) {
                unique_non_zero_elements.insert(A[i]);
            }
        }
        
        if (unique_non_zero_elements.size() <= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}

