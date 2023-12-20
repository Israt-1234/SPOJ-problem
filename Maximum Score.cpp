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
    int n; cin>>n;
    while(n--){
        int t; cin>>t;
        vector<int>a(t);
        for(int i=0;i<t;i++)
        cin>>a[i];

        int count_0=count(a.begin(),a.end(),0);
        int  count_1=count(a.begin(),a.end(),1);
        cout<<min(count_0,count_1)<<endl;
    }
    return 0;
}