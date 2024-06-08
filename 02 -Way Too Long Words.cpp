#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string ans[n];

    for(int i=0;i<n;i++){
        string str2;
        string str = arr[i];
        if(str.length()>=10){
            str2+=str[0];
            str2+=to_string(str.length()-2);
            str2+=str[str.length()-1];
        }
        else{
            str2 = str;
        }
        cout<<str2<<endl;
    }
    



    return 0;
}