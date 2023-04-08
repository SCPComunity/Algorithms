"""
Problem: T-primes
Link: https://codeforces.com/contest/230/problem/B
Tags: number-theory
Complexity: O(n * log2(log2(n)))
"""
import math

# Seive of Erathosthenese
N = int(1e6+1)
primes = [True]*N
primes[0] = primes[1] = False
for i in range(2, N):
	if (primes[i] == True):
		j = i*i
		while (j < N):
			primes[j] = False
			j += i

n = int(input())
a = list(map(int, input().split()))[:n]
for x in a:
	skrt = int(math.sqrt(x))
	if ((skrt * skrt) == x and primes[skrt]):
		print("YES")
	else:
		print("NO")
# Solved by: Muaath Alqarni
