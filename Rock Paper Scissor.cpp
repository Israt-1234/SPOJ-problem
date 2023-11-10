#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t; cin>>t;
   while(t--){
    int n; cin>>n; string a,b;
    cin>>a>>b;
    int count =0, count1=0;

    for(int i=0;i<n;i++){
        if((a[i]== 'R' && b[i]=='S') || (a[i]=='S' && b[i]=='P') ||  (a[i]=='P' && b[i]=='R') )
            count++;
        else if(a[i]==b[i])
            continue;
        else
            count1++;

    }
     if(count>count1) cout<<0<<endl;
     else if(count == count1) cout<<1<<endl;
     else {
            cout<<((count1-count)/2)+1<<endl;

     }
   }
   return 0;
}
