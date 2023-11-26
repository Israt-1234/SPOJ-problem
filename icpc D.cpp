#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
  //  cout<<sqrtNum<<endl;
    return sqrtNum * sqrtNum == num;

}

int countPerfectPairs(const vector<int>& arr) {
    int n = arr.size();
    int perfectPairs = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int product = arr[i] * arr[j];
            if (isPerfectSquare(product)) {
                    cout<<product<<endl;
                perfectPairs++;
            }
        }
    }

    return perfectPairs;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int result = countPerfectPairs(arr);
        cout << result << endl;
    }

    return 0;
}

