#include<bits/stdc++.h>
using namespace std;
//using ll=long long
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> A(n);
        vector<int> prefix_sum(n + 1, 0);


        for (int i = 0; i < n; ++i) {
            cin >> A[i];
            prefix_sum[i + 1] = prefix_sum[i] + A[i];
        }

    auto counti=[&](int X){
            int count = 0;
            for (int L = 1; L <= X; ++L) {
                for (int R = L; R <= X; ++R) {
                    int sum = prefix_sum[R] - prefix_sum[L - 1];
                    int length = R - L + 1;
                    if (sum == length) {
                        count++;
                    }
                }
            }
            return count;
        };

        // Process queries
        for (int i = 0; i < q; ++i) {
            int X;
            cin >> X;
            cout << counti(X) << endl;
        }
    }

    return 0;
}

