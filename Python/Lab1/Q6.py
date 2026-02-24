#strong number
a = int(input("Enter an integer : "))
sum = 0
temp = a
while a > 0:
    b = a % 10 #5
    fact = 1
    for j in range(1, b+1):
        fact = fact * j
    
    sum+=fact
    a = a // 10
    
if sum == temp:
    print("It is a strong number")
else:
    print("It is not a strong number")