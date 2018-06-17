x = int(input())
if x % 2 == 0:
    x += 1
for i in range (2,x,2):
    print("%d^2 = %d" %(i,i*i))
