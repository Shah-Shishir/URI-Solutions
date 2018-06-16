a,b,c = input().split()
a,b,c = [float(a),float(b),float(c)]
if a+b > c and b+c > a and c+a > b:
    print("Perimetro = %0.1f" %(a+b+c))
else:
    print("Area = %0.1f" %(((a+b)*c)/2))
