/*........Hard work and consistency is the only way to success........ */
/*
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
    string s;
    getline(cin,s);
    set<string>v;
    for(int i=0;i<s.size();i++){
        if(s[i]==':' && s[i+1]==')'){
            v.insert(":)");
            i++;
        }
          else if(s[i]==':' && s[i+1]=='('){
            v.insert(":(");
          
            i++;
        }
        
    }
    if(v.size()==0)
     cout << "machine" << endl;
 else{
    for(auto it = v.begin(); it != v.end(); it++) {
        if (*it == ":(" && next(it) != v.end() && *next(it) == ":)") {
            cout << "double agent" << endl;
            break;
        } else if (*it == ":(") {
            cout << "undead" << endl;
            break;
        } else if (*it == ":)") {
            cout << "alive" << endl;
            break;
        } else {
            cout << "machine" << endl;
            break;
        }
      }
 }
    return 0;
}
*/
//another way
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
    string s; cin>>s;
    int count =0;
    int count1=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==':' and s[i+1]=='(')
        count++;
        else if(s[i]==':' and s[i+1]==')')
        count1++;
    }
    if(count ==0 and count1==0)
    cout<<"machine"<<endl;
    else if(count==0 and count1!=0)
    cout<<"alive"<<endl;
    else if(count!=0 and count1==0)
    cout<<"undead"<<endl;
    else
    cout << "double agent" << endl;

    return 0;
}