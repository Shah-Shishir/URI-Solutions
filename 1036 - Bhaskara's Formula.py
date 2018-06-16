import math

a,b,c = input().split()
a,b,c = [float(a),float(b),float(c)]
det = b*b-4*a*c
if det < 0 or a == 0:
    print("Impossivel calcular")
else:
    print("R1 = %0.5f" %((-b+math.sqrt(det))/(2*a)))
    print("R2 = %0.5f" %((-b-math.sqrt(det))/(2*a)))
