#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    while(n--){
     int t,k;
     cin>>t>>k;
     vector<int>v(t);
     for(int i=0;i<t;i++){
        cin>>v[i];
     }
     sort(v.begin(),v.end());
     vector<int>s;
     for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(v[j]-k<=0){
                   v[j]= v[j]-k;
                s.push_back(v[j]);

            }
        }
     }
     for(int i=0;i<t;i++)
        cout<<s[i]<<" ";
     cout<<endl;
}
}
