#!/usr/bin/python3
def isPD(i):
    ilen = len(str(i))
    if ilen % 2 != 0:
        return False
    ilen -= 1
    for idx in range(0, ilen//2 + 1):
        if (str(i)[idx] != str(i)[ilen]):
            return False
        ilen -= 1
    return True

maxPD = res = 0
for num in range(99, 1000):
    for num2 in range(99, 1000):
        res = num * num2
        if (isPD(res)):
            if (res > maxPD):
                maxPD = res
print(f"{maxPD}", end="")
