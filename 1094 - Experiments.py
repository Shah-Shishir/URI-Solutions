tc = int(input())
tot = c = r = s = 0
for pos in range (0,tc):
    a,b = input().split()
    a,b = [int(a),str(b)]
    tot += a
    if b == "C":
        c += a
    elif b == "R":
        r += a
    else:
        s += a
print("Total: %d cobaias" %tot)
print("Total de coelhos: %d" %c)
print("Total de ratos: %d" %r)
print("Total de sapos: %d" %s)
print("Percentual de coelhos: %0.2f" %((c/tot)*100),end=" %\n")
print("Percentual de ratos: %0.2f" %((r/tot)*100),end=" %\n")
print("Percentual de sapos: %0.2f" %((s/tot)*100),end=" %\n")
