#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k;
    int w;
    int n;
    cin>>k>>w>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i*k;
    }
    int balance = sum-w;
    if(balance >= 0){
        cout<<balance<<endl;
    }
    else    
        cout<<"0";
    return 0;
}