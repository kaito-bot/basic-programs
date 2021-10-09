n = int(input("How many terms do you want: "))
f = []
if n>=0:
    for i in range(0, n):
        if i==0:
            f.append(0)
        elif i==1:
            f.append(1)
        else:
            f.append(f[i-1]+f[i-2])
for i in f:
    print(i)