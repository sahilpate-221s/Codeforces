#include<bits/stdc++.h>
using namespace std;
int main()
{
    string first;
    cin>>first;
    string second;
    cin>>second;
    int i=0;
    int j=second.length()-1;
    bool flag = true;
    while(i<second.size()){
        if(first[i++]==second[j--]){
            continue;
        }
        else{
            flag = false;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}