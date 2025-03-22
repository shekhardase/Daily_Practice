#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int N, int M, long long K, vector<int> Arr, vector<int> D) {
    vector<int> results;
    
    for (int start : D) {
        start--; // Convert to zero-based index
        long long total_hours = 0;
        int days_used = 0;
        int gcd_val = Arr[start];

        for (int i = start; i < N; i++) {
            gcd_val = __gcd(gcd_val, Arr[i]);
            total_hours += Arr[i] / gcd_val;
            days_used++;
            
            if (total_hours >= K) {
                results.push_back(days_used);
                break;
            }
        }
        
        if (total_hours < K) {
            results.push_back(-1);
        }
    }
    
    return results;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        long long K;
        cin >> N >> M >> K;
        
        vector<int> Arr(N);
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        
        vector<int> D(M);
        for (int i = 0; i < M; i++) {
            cin >> D[i];
        }
        
        vector<int> result = solve(N, M, K, Arr, D);
        
        for (int r : result) {
            cout << r << " ";
        }
        cout << "\n";
    }
    
    return 0;
}