import random
total = 0
vert = 0
n = 10000000
for i in range(n):
    x = 1
    y = 2
    boo = True
    while boo:
        if bool(random.getrandbits(1)):
            if bool(random.getrandbits(1)):
                x = x + 1
            else:
                x = x - 1
        else:
            if bool(random.getrandbits(1)):
                y = y + 1
            else:
                y = y - 1
        if x == 0 or x == 4:
            vert = vert + 1
            total = total + 1
            boo = False
        elif y == 0 or y == 4:
            total = total + 1
            boo = False
    print(vert/total)
