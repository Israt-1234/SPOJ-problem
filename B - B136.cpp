/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
void solved(){
            int a,b;
        cin>>a>>b;
        int k=b;
        int count=0;
        string d;cin>>d;
        for(int i=0;i<a;i++){
            if(d[i]=='*' ){
              k--;
              if(k==0){
                cout<<"YES"<<endl;
             return;
              }
              
            }
          
           else
           {
            k=b;
           }
        }
        cout<<"NO"<<endl;
}

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    while(n--){
      solved();
    }
    return 0;
}