#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    int countA=0;
    int countD =0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='A'){
            countA++;
        }
        else{
            countD++;
        }
    }

    if(countA > countD){
        cout<<"Anton"<<endl;
    }
    else if(countD > countA){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}