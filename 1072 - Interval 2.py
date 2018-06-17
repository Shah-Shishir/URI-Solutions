tc = int(input())
inn = out = 0
for pos in range (0,tc):
    n = int(input())
    if 10 <= n <= 20:
        inn += 1;
    else:
        out += 1
print ("%d in\n%d out" %(inn,out))
