tc = int(input())
for pos in range (1,tc+1):
    a,b,c = input().split()
    a,b,c = [float(a),float(b),float(c)]
    print("%0.1f" %((a*2+b*3+c*5)/10))
