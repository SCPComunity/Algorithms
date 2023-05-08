"""
Problems: Bit++
Link: https://codeforces.com/contest/282/problem/A
Tags: implementation
Complexity: O(n)
"""
#طلب المستخدم يدخل عدد صحيح
n = int(input())
x = 0
#فور للمرور بالقيم من 1 ل العدد المدخلمن الستخدم
for _ in range(n):
    oper = input()# نطلب المستخدم يدخل عملية
    if oper[1] == '+':#اذا كانت العلامة اللي دخلها جميع زيد واحد
        x += 1
    else:
        x -= 1#اذا كانت العلامة طرح نقص واحد
print(x)
# Solved by: Muaath Alqarni
