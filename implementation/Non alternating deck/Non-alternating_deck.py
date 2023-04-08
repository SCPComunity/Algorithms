"""
Problem: Non-alternating deck
Link: https://codeforces.com/contest/1786/problem/A1
Tags: implementation
Complexity: O(sqrt(n))
"""
t = int(input())
for _ in range(t):	
	n = int(input())
	alice = 0
	bob = 0
	b = False
	cur = 1
	idx = 1
	while (n > 0):
		idx += cur
		if (b):
			bob += min(cur, n)
		else:
			alice += min(cur, n)
		n -= cur
		b = not b
		cur += 4
	print(alice, bob)
# Solved by: Muaath Alqarni
