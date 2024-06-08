#include<bits/stdc++.h>
using namespace std;
int main()
{

    string name;
    cin>>name;
    unordered_set<char>ans;
    for(auto ch:name){
        ans.insert(ch);
    }

    if( ans.size() % 2 !=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }

    return 0;
}