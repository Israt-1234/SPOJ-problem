#include<bits/stdc++.h>
using namespace std;
//using ll=long long
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1e5+9;
int a[N];
//int d[N][N],pref[N][N];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;int maix=0;
    int n,k; cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        if(k%x==0 && x>maix){
            maix=x;
        }
    }
    cout<<k/maix<<endl;
    return 0;

}

