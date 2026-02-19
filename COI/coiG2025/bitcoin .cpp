#include <bits/stdc++.h>
using namespace std;

const int N = 500005;
int p[N];
long long a[N], b[N];

int main() {

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
     cin >> p[i];
        
    }

    for (int k = 1; k <= n; k++) {
        long long m = -p[0];
        for (int i = 1; i < n; i++) {
            b[i] = max(b[i - 1], p[i] + m);
            m = max(m, a[i] - p[i]);
        }
        cout << b[n - 1] << " ";
        for (int i = 0; i < n; ++i) {
            a[i] = b[i];
            
        }
    }
    cout << endl;
    return 0;
}
