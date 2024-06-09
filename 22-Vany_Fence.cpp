#include<bits/stdc++.h>
using namespace std;
int main()
{
    int friends ;
    cin>>friends;
    int height;
    cin>>height;

    int count=0;

    int arr[friends];
    for(int i=0;i<friends;i++){
        cin>>arr[i];
    }
    for(int i=0;i<friends;i++){
        if(arr[i]<=height){
            count++;
        }
        else{
            count =count+2;
        }
    
    }
    cout<<count<<endl;
    return 0;


}