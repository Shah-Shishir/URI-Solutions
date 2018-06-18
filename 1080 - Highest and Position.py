pos = 1
min = 0
for i in range (1,101):
    x = int(input())
    if x > min:
        pos = i
        min = x
print("%d\n%d" %(min,pos))
