cnt = 0
sum = 0.0
for i in range (0,6):
    n = float(input())
    if n > 0.0:
        cnt += 1
        sum += n
print ("%d valores positivos" %cnt)
print("%0.1f" %(sum/cnt))
