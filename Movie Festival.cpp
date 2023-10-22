//#include<bits/stdc++.h>
//#define ll long long
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int n; cin>>n;
//    vector<pair<int ,int>>v;
//    for(int i=0;i<n;i++){
//        int l,r; cin>>l>>r;
//        v.push_back({l,r});
//    }
//  sort(v.begin(), v.end(), [](pair<int, int>a, pair<int, int> b){
//         return a.second<b.second;
//       });
//       int max_end=-1;
//       int ans=0;
//       for(auto [start,end]:v){
////        cout<<l<<r;
//        if(start>=max_end){
//            max_end=end;
//            ans++;
//        }
//
//       }
//       cout<<ans<<'\n';
//       return 0;
//}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<pair<int ,int>>v;
    for(int i=0;i<n;i++){
        int l,r; cin>>l>>r;
        v.push_back({r,l});
    }
  sort(v.begin(),v.end());
       int max_end =0; int ans=0;
      for(auto[end ,start]:v){
        if(start>=max_end){
            max_end=end;
            ans++;
        }

      }
      cout<<ans<<endl;
      return 0;
}














