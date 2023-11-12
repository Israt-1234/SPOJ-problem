#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; int n; cin>>n;
    int sum=0;
    while(t--){
        int s; cin>>s;
        if(s<=n)
            sum=sum+s;

    }
    cout<<sum<<endl;
    return 0;
}
