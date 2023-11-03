#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }


        int count=0;
        for(int i=0;i<=n-k;i++){
            int sum=0;

            for(int l=i;l<k+i;l++)
                sum|=a[l];
            if(sum%2!=0)  count++;
        }


        cout<<count<<endl;
	}

	return 0;
}
