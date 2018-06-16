a,b,c = input().split()
a,b,c = [int(a),int(b),int(c)]
arr = [a,b,c]
arr.sort()
for item in arr:
    print(item)
print()
print ("%d\n%d\n%d" %(a,b,c))