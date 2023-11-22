//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define yes cout<<"YES"<<endl
//#define no cout<<"NO"<<endl
//const int N=1005;
//int d[N][N],pref[N][N];
//int main()
//{
//   // clock_t st= clock();
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll n;
//    cin>>n;
//    while(n--){
//     int t; cin>>t;
//     vector<ll>a(t);
//     ll maxim=0;
//     for(int i=0;i<t;i++){
//        cin>>a[i];
//        if(a[i]%2!=0)
//         maxim=max(a[i],maxim);
//     }
////     for(auto x:maxim)
////     a.erase(x);
////if(maxim!=0)
//// a.erase(find(a.begin(), a.end(), maxim)) ;
////     ll l=a[0];
////     for(int i=1;i<a.size();i++){
////        l^=a[i];
////     }
// cout<<l<<endl;
//    }
//    return 0;
//}



#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1005;
int d[N][N],pref[N][N];
int main()
{
   // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--){
     int t; cin>>t;
     vector<ll>a(t);
     ll maxim=0;
     for(int i=0;i<t;i++){
        cin>>a[i];
     }
//     for(auto x:maxim)
//     a.erase(x);

     ll l=a[0];
     for(int i=1;i<a.size();i++){
        l^=a[i];
     }
     ll mini=l;
     for(int i=0;i<a.size();i++){
            ll n1=l^a[i];
        mini=min(mini,n1);
     }
 cout<<mini<<endl;
    }
    return 0;
}

















