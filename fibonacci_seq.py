a = 0
b = 1
c = 0
print("Enter the Value of n: ", end="")
n = int(input())
print("\nFibonacci Series:", a, b, end=" ")
c = a+b
n = n-2
while n>0:
    print(c, end=" ")
    a = b
    b = c
    c = a+b
    n = n-1
