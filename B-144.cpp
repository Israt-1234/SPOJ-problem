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
    int n;
    cin >> n;
    vector<string> v(n); 

    for(int i = 0; i < n; i++){
        cin >> v[i];
    
    }

    int q;
    cin >> q;
  
    vector<string> k(q); 
    
    for(int i = 0; i < q; i++){
        cin >> k[i];
    }

    int count = 0;
    for(int i = 0; i < q; i++){
        for(int j = 0; j < n; j++){
            if(v[j] == k[i])
                count++;
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}