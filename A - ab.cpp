#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n-1;i++){
        if((s[i]=='a'&&s[i+1]=='b') || (s[i]=='b'&&s[i+1]=='a'))
            count=1;
    }
    if(count==0) cout<<"No"<<endl;
    else   cout<<"Yes"<<endl;
    return 0;
}
