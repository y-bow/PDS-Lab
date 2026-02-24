a = int(input("Enter an integer : "))
count = 0
while a > 0:
    b = a % 10
    a = a // 10
    count +=1
print(count)