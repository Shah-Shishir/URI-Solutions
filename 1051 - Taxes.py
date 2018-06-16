x = float(input())
if x <= 2000.00:
    print("Isento")
else:
    if 2000.01 <= x <= 3000.00:
        ans = (x-2000.00)*0.08;
    elif 3000.01 <= x <= 4500.00:
        ans = 80 + (x-3000.00)*0.18;
    else:
        ans = 350 + (x-4500.00)*0.28;
    print ("R$ %0.2f" %ans)
