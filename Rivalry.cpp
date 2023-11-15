#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl
#define No  cout<<"No"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int r,r1; cin>>r>>r1;
    int d,d1; cin>>d>>d1;
    int k= r+d; int l= r1+d1;
    if(k>l)cout<<"Dominater"<<endl;
    else
        cout<<"Everule"<<endl;
        return 0;
}

