a,b = input().split()
a,b = [int(a),int(b)]
if a == b:
    ans = 24
elif a >= 12 and b <= 12:
    ans = (24-a)+b
else:
    ans = b-a
print("O JOGO DUROU %d HORA(S)" %ans)
