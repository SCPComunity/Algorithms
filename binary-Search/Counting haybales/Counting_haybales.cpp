/*
Problem: Counting Haybales
Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=666
Tags: Binary search
Explaination:
For each query, we can do binary search the index of r, and for index l
And the answer is right_index - left_index + 1

Complexity: O(q*log2(n))
*/

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define pii pair<int,int>
#define all(x) x.begin(), x.end()
using namespace std;
const int N = (int)2e5 + 1;
const int MOD = (int)1e9 + 7;
const ll INF = INT_MAX;

int n, q, l, r, a[N];

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("haybales.in", "r", stdin);
	freopen("haybales.out", "w", stdout);
	cin >> n >> q;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	while (q--)
	{
		cin >> l >> r;
		// No need to do +1, because upper_bound returns index+1
		cout << (upper_bound(a, a + n, r) - a) - (lower_bound(a, a + n, l) - a) << '\n';
	}
}
// Solved by: Muaath Alqarni 
