x = float(input())
if 0.00 <= x <= 400.00:
    new_sal = x + x * 0.15;
    money = 0.15 * x;
    per = 15;
elif 400.01 <= x <= 800.00:
    new_sal = x + x * 0.12;
    money = 0.12 * x;
    per = 12;
elif 800.01 <= x <= 1200.00:
    new_sal = x + x * 0.1;
    money = 0.1 * x;
    per = 10;
elif 1200.01 <= x <= 2000.00:
    new_sal = x + x * 0.07;
    money = 0.07 * x;
    per = 7;
else:
    new_sal = x + x * 0.04;
    money = 0.04 * x;
    per = 4;
print ("Novo salario: %0.2f" %new_sal)
print ("Reajuste ganho: %0.2f" %money)
print ("Em percentual: %d" %per,end=" %\n")
