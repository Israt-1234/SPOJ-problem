/*........Hard work and consistency is the only way to success........ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1005;
// int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                continue;
            else{
            sum += s[i] -'0';
                }
        }
        cout<<sum<<endl;
    }
    return 0;
}