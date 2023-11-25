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
  int num; cin>>num;
  int l;cin>>l;
  int a[num];
  int count =0;
  for(int i=0;i<num;i++){
    cin>>a[i];
    if(a[i]>=l)
        count ++;
  }
  cout<<count<<endl;
  return 0;
}

