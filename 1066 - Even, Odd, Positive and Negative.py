E = O = P = N = 0
for i in range (0,5):
    x = int(input())
    if x % 2 == 0:
        E += 1
    else:
        O += 1
    if x > 0:
        P += 1
    elif x < 0:
        N += 1
print("%d valor(es) par(es)" %E)
print("%d valor(es) impar(es)" %O)
print("%d valor(es) positivo(s)" %P)
print("%d valor(es) negativo(s)" %N)
