from functools import reduce

def max(m, n):
    if m>n:
        return m
    return n

a = [1,2,3,444,55,66,7,8,9]
maxNum = reduce(max, a)
print(maxNum)