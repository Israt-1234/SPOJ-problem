/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
void call(){
  int n; cin>>n;
  vector<int>v;
  for(int i=n;i>n/2;i--){
    v.push_back(i);
    v.push_back(n-i+1);
  }
  if(n%2!=0)
  v.pop_back();
  for(auto x:v)
  cout<<x<<" ";
  cout<<endl;

}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    while(n--){
        call();
    }
    return 0;
}