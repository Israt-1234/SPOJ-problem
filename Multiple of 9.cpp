#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
   // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n ;cin>>n;
         string s;
        cin>>s;
        int l =s.size();
 int count =0,sum=0;
        for(int i=0;i<l;i++){
            if(s[i]=='?') count++;
                    else
                    sum+=s[i]-'0';
        }
        if(s[0]=='?'){
            cout<<'1';
            for(int i=1;i<count;i++) cout<<'0';
        }
        else if(sum%9!=0){
            for(int i=0;i<count;i++) cout<<'1';
        }
        else{
            for(int i=0;i<count-1;i++) cout<<'1';
            cout<<'2';
        }
        cout<<endl;
      }
         return 0;
}
