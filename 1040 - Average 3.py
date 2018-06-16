a,b,c,d = input().split()
a,b,c,d = [float(a),float(b),float(c),float(d)]
avg = (a*2+b*3+c*4+d*1)/10
print ("Media: %0.1f" %avg)
if avg >= 7.0:
    print("Aluno aprovado.")
elif avg < 5.0:
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")
    s = float(input())
    print ("Nota do exame: %0.1f" %s)
    avg = (avg+s)/2
    if avg >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print ("Media final: %0.1f" %avg)
