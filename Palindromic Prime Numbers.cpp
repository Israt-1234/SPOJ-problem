#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl
#define No  cout<<"No"<<endl
bool ispalindrome(int i){

   string k = to_string(i);
   reverse(k.begin(),k.end());
   int l=stoi(k);
   if(i==l) return true;
   else return false;
}

bool isprime(int num){
  if(num<=1) return false;
  for(int i=2;i*i<=num;i++){
    if(num%i==0)
        return false;
  }
  return true;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int t; cin>>t;
    while(t--){
            int e=0,o=0;
        int n; cin>>n;
        int even =0; int odd=0;
        int count=0, num=2;
        while(count<n){
            if(ispalindrome(num) && isprime(num))
            {
                if(to_string(num).length()%2==0)
                    even++;
                        else
                        odd++;
                count++;
            }
            num++;
        }
        cout<<even<<" "<<odd<<endl;

    }
}
