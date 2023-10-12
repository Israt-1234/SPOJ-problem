#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   int n ;cin>>n;
   while(n--){

   char a1,a2,a3,b1,b2,b3;
   cin>>a1>>a2>>a3>>b1>>b2>>b3;
   string s1,s2;
 //  s1=s2="";
   s1+=a1;    //cout<<"s1: "<<s1<<endl;
   s1+=a2;    //cout<<"s1: "<<s1<<endl;
   s1+=a3;    // cout<<"s1: "<<s1<<endl;

   s2+=b1;
   s2+=b2;
   s2+=b3;

   sort(s1.begin(),s1.end());
   sort(s2.begin(),s2.end());
//   for(int i=0;i<s1.size();i++)
//    cout<<s1[i];
//   cout<<endl;

//    for(int i=0;i<s1.size();i++)
//    cout<<s2[i];
//   cout<<endl;


  reverse(s1.begin(),s1.end());
  reverse(s2.begin(),s2.end());
  int a, b;
  a=stoi(s1);
  b=stoi(s2);

  if(a<b)
    cout<<"Bob"<<endl;
  else if(a>b)
         cout<<"Alice"<<endl;

   else
    cout<<"Tie"<<endl;
   }
   return 0;
}
