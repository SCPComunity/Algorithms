/* problem : https://codeforces.com/contest/230/problem/B
It can be shown that only squares of prime numbers are T-primes
and that there are not too many of them — as many as there are prime numbers not greater than.
Precompute these numbers (using, for example, the sieve of Eratosthenes)
and store them in an array or an std::set, then we can answer each query by simply
checking whether the number in question is amongst the precomputed numbers
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int sqrt_lim = 1000001;
set<ll> sq;
void precalc() { 
	// I will precalculate all I need using sieve of Eratosthenes
	// check https://www.geeksforgeeks.org/sieve-of-eratosthenes/ 
	bool prime[sqrt_lim];
	memset(prime,1,sizeof(prime));
	prime[0] = prime[1] = 0;
	for (int i = 2; i*i < sqrt_lim; i++) {
		if (prime[i]) {
		    for (int j = i*i; j < sqrt_lim; j += i) {
			prime[j] = false;
		    }
		}
	}
	for (int i = 2; i < sqrt_lim; i++) {
		if (prime[i])
			sq.insert((ll)i * i);
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	precalc();
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		ll x; cin >> x;
		if (sq.find(x) != sq.end()) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}
// solved by : Ahmad Alhashim
