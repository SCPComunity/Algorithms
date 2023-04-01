"""
Problem: Matrix Rotation
Link: https://codeforces.com/contest/1772/problem/B
Tags: brute-force, implementation
"""

# Checks if it's beautiful
def isB(a, b, c, d) -> bool:
    return (a<b and c<d and a<c and b<d)


for _ in range(int(input())):
    ab = list(map(int, input().split()))
    cd = list(map(int, input().split()))
    a = ab[0]
    b = ab[1]
    c = cd[0]
    d = cd[1]
    # Try every possible rotation
    if (isB(a,b,c,d) or isB(c,a,d,b) or isB(d,c,b,a) or isB(b,d,a,c)):
        print("YES")
    else:
        print("NO")

# Solved by: Muaath Alqarni
 
