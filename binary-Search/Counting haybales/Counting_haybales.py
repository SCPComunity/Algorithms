"""
Problem: Counting Haybales
Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=666
Tags: Binary search
Explaination:
For each query, we can do binary search the index of r, and for index l
And the answer is right_index - left_index + 1

Complexity: O(q*log2(n))
"""

import bisect
import sys

sys.stdin = open("haybales.in", "r")
sys.stdout = open("haybales.out", "w")

line1 = list(map(int,input().strip().split()))[:2]
n = line1[0]
q = line1[1]
a = list(map(int,input().strip().split()))[:n]
a = sorted(a)
for _ in range(q):
	line_ = list(map(int,input().strip().split()))[:2]
	# No need for +1, becuase bisect_right returns index+1
	print(bisect.bisect_right(a, line_[1]) - bisect.bisect_left(a, line_[0]))

# Solved by: Muaath Alqarni 
