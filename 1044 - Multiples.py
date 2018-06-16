a,b = input().split()
a,b = [int(a),int(b)]
if b % a and a % b:
    print("Nao sao Multiplos")
else:
    print("Sao Multiplos")
