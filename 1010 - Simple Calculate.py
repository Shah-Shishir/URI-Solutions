a,b,c = input().split()
a,b,c = [int(a),int(b),float(c)]
d,e,f = input().split()
d,e,f = [int(d),int(e),float(f)]
print ("VALOR A PAGAR: R$ %0.2f" %(b*c+e*f))
