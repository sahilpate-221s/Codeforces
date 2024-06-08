#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int countlower =0;
    int countupper =0;
    for(int i=0; i<n.length();i++){
        if(n[i]>='a' && n[i]<='z')
            countlower++;
        else
            countupper++;
    }

    if(countlower >= countupper){
        for(auto &ch:n){
            ch=tolower(ch);
        }
    }
    else{
        for(auto &ch:n){
            ch=toupper(ch);
        }
    }

    cout<<n<<endl;
    
 return 0;
}