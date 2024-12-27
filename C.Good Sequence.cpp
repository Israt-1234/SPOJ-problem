/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    ll a[t];
    for(int i = 0; i<t; i++)
    cin >> a[i];

    map<ll, ll> mp;

    for(auto it : a){
        mp[it]++;
    }
    ll count = 0;
    for(auto it : mp){
        if(it.first != it.second){
            if(it.first > it.second)
            count += it.second;
            else
            count += (it.second-it.first);
        }
    }

    cout << count << endl;
    return 0;
}
