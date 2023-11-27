#include<bits/stdc++.h>
using namespace std;
//using ll=long long
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1e5+9;
//int a[N];
//int d[N][N],pref[N][N];
int solve(){
 int a,b,c; cin>>a>>b>>c;
    for(int i=0;i<30;i++){
        for(int j=i+1;j<30;j++){
            int x=(1LL<<i)+(1LL<<j);
            int aa=a^x;
            int bb=b^x;
            int cc=c^x;
            if(aa<bb and bb<cc){
                cout<<x<<endl;
                 return 0;
            }
        }
    }
    cout<<-1<<endl;

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll n ;cin>>n;

while(n--){
   solve();
}

}
