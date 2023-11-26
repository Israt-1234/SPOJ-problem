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
   // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
            int t; cin>>t;
        string s; cin>>s;
        int count=0; int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
                count++;
                cout<<count<<endl;

        }
        double l =(double)count/t;
    int k =l*100;
    cout<<k<<endl;
    if(k>25)
        cout<<"Bad"<<endl;
    else
        cout<<"Good"<<endl;
     }
    return 0;
}

