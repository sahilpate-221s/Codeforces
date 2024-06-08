#include<bits/stdc++.h>

using namespace std;
int main(){
    string n,m;
    cin>>n;
    cin>>m;

   for(char &ch :n){
    ch=tolower(ch);
   }
   for(char &ch: m){
    ch=tolower(ch);
   }

    int min_len = min(n.length(), m.length());

   for (int i = 0; i < min_len; i++) {
        if (n[i] < m[i]) {
            cout << "-1";
            return 0;
        } else if (n[i] > m[i]) {
            cout << "1";
            return 0;
        }
    }

    if (n.length() < m.length()) {
        cout << "-1";
    } else if (n.length() > m.length()) {
        cout << "1";
    } else {
        cout << "0";
    }

}