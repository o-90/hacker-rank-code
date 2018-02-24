#!/usr/bin/env python


INF = 1000000007

n = int(input())
arr = list(map(int, input().split(' ')))

# initialize
j = n - 2
lst = []
ans = []

# populate arrays
count_init = pow(2, n, INF) - 1
lst.append(count_init)
ans.append(count_init * arr[0] % INF)

# iterate and get each value
for i in range(1, n):
    val = lst[i-1] + pow(2, j, INF) - pow(2, i-1, INF)
    lst.append(val)
    ans.append(val * arr[i] % INF)
    j -= 1

# print(ans)
print(sum(ans) % INF)
