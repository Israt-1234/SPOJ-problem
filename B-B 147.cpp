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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int count=0;
    for(int i=0;i<n;i++){
        if((i+1)%2==1 && (a[i]%2==1))
        count++;
            }
            cout<<count<<endl;
    return 0;
}