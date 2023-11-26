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
        int a[t];
        for(int i=0;i<t;i++){
            cin>>a[i];

        }
            int sum=0;
            int count =0;
        for(int i=0;i<t;i++){
            for(int j=i+1;j<t;j++){

               sum=((a[i]^a[j])+(a[i]&a[j])+(a[i]|a[j]));
               if(sum%4==0){
                count++;
               }
            }
        }
        cout<<count<<endl;

    }
    return 0;
}

