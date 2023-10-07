#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int count=0;
   for(int i=1;i<s.size();i+=2){
    if(s[i]=='0'){
       count++;
    }
    else
        break;
   }
   if(count==8)
    cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
   return 0;
}
