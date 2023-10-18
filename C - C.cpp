#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int l=1;l<=n;l++){
                if((i+j)%k==0 && (j+l)%k==0 && (i+l)%k==0)
                    count++;
            }
        }
    }
    cout<<count<<'\n';
}


