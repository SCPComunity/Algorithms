#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

//https://codeforces.com/contest/1786/problem/A1

//Explanation
//the cards start by 5 and increase by 4 every time
// use mod to determine the turn 

int32_t main(){
  fast;
  int tc;cin>>tc;
  while(tc--){
    int n;cin>>n;n--;
    int next =5;
    int arr[2];arr[0]=1;arr[1]=0;
    int p=1;
    while(next<n){
      arr[p%2]+=next;
      n-=next;
      next+=4;
      p++;
    }
    arr[p%2]+=n;
   cout<<arr[0]<<" "<<arr[1]<<endl;
  }
  return 0;
}
//solved by : Anas Alamri