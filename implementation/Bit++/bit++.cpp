/*
Problem: Bit++
Link: https://codeforces.com/contest/282/problem/A
Tags: implementation
Complexity: O(n)
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, x = 0;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        if (str[1] == '+')
            x++;
        else
            x--;
    }
    cout << x;
}
// Solved by: Muaath Alqarni