#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n; cin>>n;
  if(n<3)
    cout<<"GOLD"<<endl;
  else if(n>=3 && n<6)
    cout<<"SILVER"<<endl;
  else if(n>=6)
    cout<<"BRONZE"<<endl;
  return 0;
}
