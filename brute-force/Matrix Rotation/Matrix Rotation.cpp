#include <bits/stdc++.h>
#define int long long
using namespace std;

//https://codeforces.com/contest/1772/problem/B

//explanation
//solved using brute force 
//rotate the matrix 4 times as maximum and check every time using isB fun


//check if matrix is beatiful or not
bool isB(int arr[]){
    if(arr[0]<arr[1]&&arr[2]<arr[3]&&arr[0]<arr[2]&&arr[1]<arr[3]) return true;
    return false;
}

int32_t main() {
    //test cases
    int t;cin>>t;
    while(t--) {
        int arr[5];
        //input loop
        for (int i = 0; i <4; ++i) {
            cin>>arr[i];
        }
        // if its already beatiful
        //no need to rotation
        if(isB(arr)){
            cout<<"YES"<<endl;
            continue;
        }
        
        int xx = 1;
        //default result is NO
        string res = "NO";
        while(xx<=4) {
            //temp array to store the array after rotation
            int arr1[4];
            arr1[0] = arr[2];
            arr1[1] = arr[0];
            arr1[2] = arr[3];
            arr1[3] = arr[1];
            //make arr=arr1
            for (int i = 0; i < 4; ++i) {
                arr[i]=arr1[i];
            }
            //check
            if (isB(arr)) {
                res ="YES" ;
                break;
            }
            xx++;
        }
       cout<<res<<endl;
    }
    return 0;
}
//solved by : Anas Alamri
