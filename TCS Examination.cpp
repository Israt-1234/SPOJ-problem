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
    int n;cin>>n;
    while(n--){
        int a[3];
        int b[3];
        for(int i=0;i<3;i++)
        cin>>a[i];
        for(int i=0;i<3;i++)
        cin>>b[i];
        int sum=0,sum1=0;
        for(int i=0;i<3;i++){
            sum+=a[i];
            sum1+=b[i];
        }
        if(sum>sum1)
          cout<<"DRAGON"<<endl;
        else if(sum1>sum)
          cout<<"SLOTH"<<endl;
        else{
            if(a[0]>b[0])
            cout<<"DRAGON"<<endl;
            else if(b[0]>a[0])
            cout<<"SLOTH"<<endl;
            else{
                if(a[1]>b[1])
                cout<<"DRAGON"<<endl;
                else if(b[1]>a[1])
               cout<<"SLOTH"<<endl;
               else{
                 if(a[2]>b[2])
                cout<<"DRAGON"<<endl;
                else if(b[2]>a[2])
               cout<<"SLOTH"<<endl;
               else
               cout<<"TIE"<<endl;
               }
            }
        }
    }
    return 0;
}