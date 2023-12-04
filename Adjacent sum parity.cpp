#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n;  cin>>n;
        int b[n];
       
        for(int i=1;i<=n;i++)
        cin>>b[i];
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=b[i];
    }
    if(sum%2==0)
    yes;
    else
    no;
    }
    return 0;
}