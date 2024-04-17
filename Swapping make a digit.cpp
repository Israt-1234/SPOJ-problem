#include <bits/stdc++.h>
using namespace std;


int main() {
     int n;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;

       
        string c = to_string(a);
        string d = to_string(b);

        
        reverse(c.begin(), c.end());
        reverse(d.begin(), d.end());

       
        int k = stoi(c);
        int l = stoi(d);

      
        if (k > l or a>l or k>b or a>b) 
            cout << "Yes" << endl;
         else 
            cout << "No" << endl;  
        
    }
    
    return 0;
}
