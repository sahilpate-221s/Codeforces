#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i])
            count++;
    }
    cout<<count;
    return 0;
}