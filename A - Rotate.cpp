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
  int a= num%10;  cout<<"a"<<a<<endl;
  int b= (num/10)%10;cout<<"a"<<b<<endl;
  int c=(num/100)%10;cout<<"a"<<c<<endl;
  int x=a*100+b*10+c;
  int y=b*100+c*10+a;
  int z=c*100+a*10+b;
  cout<<x+y+z<<endl;
  return 0;
}
