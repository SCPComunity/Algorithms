"""
Problems: Bit++
Link: https://codeforces.com/contest/282/problem/A
Tags: implementation
Complexity: O(n)
"""
n = int(input())
x = 0
for _ in range(n):
    oper = input()
    if oper[1] == '+':
        x += 1
    else:
        x -= 1
print(x)
# Solved by: Muaath Alqarni