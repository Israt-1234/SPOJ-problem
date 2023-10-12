#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   int n ;cin>>n;
   while(n--){
    int t,r;
    cin>>t>>r;

    int div=t/r;
    if(div>20)
        cout<<20<<endl;
    else
        cout<<div<<endl;
   }
   return 0;
}
