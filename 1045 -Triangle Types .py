a,b,c = input().split()
a,b,c = [float(a),float(b),float(c)]
if a+b <= c or b+c <= a or c+a <= b:
    print("NAO FORMA TRIANGULO")
else:
    if a*a == b*b+c*c or b*b == a*a+c*c or c*c == b*b+a*a:
        print("TRIANGULO RETANGULO")
    elif a*a > b*b+c*c or b*b > a*a+c*c or c*c > b*b+a*a:
        print("TRIANGULO OBTUSANGULO")
    else:
        print("TRIANGULO ACUTANGULO")

    if a == b == c:
        print("TRIANGULO EQUILATERO")
    elif a == b != c or a == c != b or c == b != a:
        print("TRIANGULO ISOSCELES")
