#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>  t;
    while(t--){
        string str;
        cin >> str;
        int count_vowel = 0, count_consonant = 0;
        bool isPossible = true;
        for(int i = 0; i < 8; i++){
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
                    if(i == 1 || i == 3 || i == 5){
                        count_vowel++;
                    }
                    else{
                        isPossible = false;
                        break;
                    }
            }
            else{
                if(i == 0 || i == 2 || i == 4 || i == 7 || i == 6 ){
                    count_consonant++;
                }
                else{
                    isPossible = false;
                    break;
                }
            }
        }
        if(count_vowel == 3 && count_consonant == 5 && isPossible == true) cout <<"YES" << endl;
        else cout << "NO" << endl;
    }
}