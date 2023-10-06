#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool com(pair<int,int>a, pair<int ,int>b)
{
    int x1=a.first, y1=a.second;
    int x2=b.first, y2=b.second;

    if(x1>x2)  return true;
    else if(x1==x2){
        if(y1<y2)  return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n ;cin>>n;
      vector<pair<int ,int>>point;
        for(int i=0;i<n;i++){
          int x,y;   cin>>x>>y;
         pair<int, int> p=make_pair(x,y);
        point.push_back(p);
        }

      sort(point.begin(), point.end(),com);
      reverse(point.begin(),point.end());
       for(int i=0;i<n;i++){
        int l=point[i].first,r=point[i].second;
        cout<<l<<' '<<r<<'\n';
       }
    }
    return 0;
}
