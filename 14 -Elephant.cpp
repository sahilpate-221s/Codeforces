#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=5;
    int count=0;
    while(n>0){
        count += n/x;
        n = n%x;
        x--;
    }
    cout<<count<<endl;
    return 0;
}