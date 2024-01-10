#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1005;

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    cin >> n;
    while(n--) {
   
          string s="";
          for(int i=0;i<6;i++){
            string k; cin>>k;
            s+=k;
            
          }
          if(s.find("WWW")!=string::npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
