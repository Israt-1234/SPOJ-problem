/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int a,b,c;cin>>a>>b>>c;
        if(a>50)
        cout<<"A"<<endl;
        else if(b>50)
        cout<<"B"<<endl;
        else if(c>50)
        cout<<"C"<<endl;
        else
        cout<<"NOTA"<<endl;
    }
    return 0;
}