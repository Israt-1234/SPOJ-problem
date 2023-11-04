#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long b;
    cin>>b;
    long long res=-1;
    for(int  a=1; a<=15; a++)
    {
        long long x= 1;
        for(int i=0; i<a; i++)
            x*=a;
        if(x==b)
        {
            cout<<a<<endl;
              return 0;     //  exit(0);
        }
    }
    cout<<-1<<endl;

    return 0;
}
