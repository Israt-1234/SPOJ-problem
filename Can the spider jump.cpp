#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
int w,l,m,x,y;
 cin>>w>>l>>m>>x>>y;
 cout<<(min((m-x),(m-y))>=w?"JUMP":"FAIL")<<endl;
    }
 return 0;

}
