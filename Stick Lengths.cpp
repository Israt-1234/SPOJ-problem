#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        int mid =a[n/2];
    int ans=0;
    for(int i=0;i<n;i++){
        ans+= abs(a[i]-mid);
    }
    cout<<ans<<endl;
    return 0;
}

