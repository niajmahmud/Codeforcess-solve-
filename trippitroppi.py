n = int(input())

for i in range(1, n+1): 
    arr = input()
    b = arr.split(" ")
    length = len(b)
    print(length) 
    for j in range(length):
        x = b[j]
        print(x[0], end="")

    print("\n", end="")
 
    
    