a,b,c = input().split()
a,b,c = [int(a),int(b),int(c)]
if a >= b and a >= c:
    print("%d" %a,end="")
elif b >= a and b >= c:
    print("%d" %b,end="")
else:
    print("%d" %c,end="")
print (" eh o maior")
