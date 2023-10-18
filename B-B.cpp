#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        vector<ll>prefix_sum(n);
        vector<ll>suffix_sum(n);

        prefix_sum[0]=a[0];
        for(int i=1;i<n;i++)
            prefix_sum[i]=prefix_sum[i-1]+a[i];

        suffix_sum[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
            suffix_sum[i]=suffix_sum[i+1]+a[i];

        ll minsum =prefix_sum[0]+suffix_sum[0];
       // cout<<minsum<<"minsum"<<endl;
        int index=0;
        for(int i=1;i<n;i++){
            if(prefix_sum[i]+suffix_sum[i]<minsum){
                minsum=prefix_sum[i]+suffix_sum[i];
                index=i;
            }
        }
        cout<<index+1<<endl;

    }
}

