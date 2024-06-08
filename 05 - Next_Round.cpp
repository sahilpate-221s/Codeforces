#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    int m;
    cin>>m;
    int count =0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;


    int ind = arr[m-1];
    for(int i=0; i<=n; i++){
        if(arr[i]>=ind && arr[i]>0){
            count++;
        }
        else 
            break;
    }
    cout<<count<<endl;
 return 0;
}




// #include <iostream>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;

//     int scores[n];
//     for (int i = 0; i < n; ++i) {
//         cin >> scores[i];
//     }

//     int advancing_count = 0;
//     int kth_score = scores[k - 1];
//     for (int i = 0; i < n; ++i) {
//         if (scores[i] >= kth_score && scores[i] > 0) {
//             advancing_count++;
//         } else {
//             break; // Since the scores are in non-increasing order, we can stop checking once a score is lower than the k-th score
//         }
//     }

//     cout << advancing_count << endl;
//     return 0;
// }
