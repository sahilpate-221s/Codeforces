#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    cin.ignore(); 
    int X=0;
    while(n--){
        string str;
        getline(cin,str);
        if(str == "++X" || str == "X++"){
            X++;
        }
        else if(str=="X--" || str =="--X"){
            X--;
        }

    }
    cout<<X<<endl;
    return 0;
}