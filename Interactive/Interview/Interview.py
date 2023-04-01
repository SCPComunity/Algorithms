"""
Problem: Interview
Link: https://codeforces.com/problemset/problem/1807/E
Tags: interactive, binary-search
"""

from sys import stdout

def ask(rng) -> int:
    print('?', len(rng), *rng)
    stdout.flush()
    return int(input())
  

for _ in range(int(input())):    
    n = int(input())
    a = list(map(int, input().split()))
    left = 1
    right = n
    while (left < right):
        mid = (left + right) // 2
        # mid+1 because range() doesn't include the last element [)
        ans = ask(range(left, mid+1))
        expected = 0
        for i in range(left, mid + 1):
            expected = expected + a[i-1]
        if (ans > expected):
            right = mid
        else:
            left = mid + 1
    print('!', left)

# Solved by: Muaath Alqarni 
