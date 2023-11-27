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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n ; cin>>n;
  int l;
  while(n--){
    string s,s1; cin>>s>>s1;
        cout << s << endl;
        cout << s1 << endl;
    for(int i=0;i<s.size();i++){
       if(s[i]==s1[i]){
       cout<<'.';
       }
       else
        cout<<'*';
    }
    cout<<endl<<endl;
  }
  return 0;
}
