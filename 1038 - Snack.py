x,y = input().split()
x,y = [int(x),int(y)]
if x == 1:
    ans = y*4;
elif x == 2:
    ans = y*4.5;
elif x == 3:
    ans = y*5;
elif x == 4:
    ans = y*2;
else:
    ans = y*1.5;
print ("Total: R$ %0.2f" %ans)
