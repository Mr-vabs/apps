n = int(input("input no of terms :: "))

print()

for i in range(1, n+1):
    for j in range(1, i*n+1):
        if (j > i*n-n):
            print("*",end="")
        else:
            print(" ",end="")
    print()

print()
