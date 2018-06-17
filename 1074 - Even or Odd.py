tc = int(input())
for pos in range (0,tc):
    n = int(input())
    if n == 0:
        print("NULL")
    else:
        if n % 2 == 0:
            print("EVEN",end="")
        else:
            print("ODD",end="")
        if n > 0:
            print(" POSITIVE")
        else:
            print(" NEGATIVE")
