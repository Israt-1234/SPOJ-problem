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
        int a, b;
        cin >> a >> b;
        int count = 0;
        int bob = 0;
        for (int i = 1; i <= 1000; i++)
        {
            if (i % 2 != 0)
            {
                count += i;
                if (count > a)
                {
                    cout << "Bob" << endl;
                    break;
                }
            }
            else
            {
                bob += i;
                if (bob > b){
                    cout << "Limak" << endl;
                    break;
                }
            }
        }
    }

        return 0;
 }