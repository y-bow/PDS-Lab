a = int(input("Enter an integer : "))
flag = 0
for i in range(2, a):
    if a % i == 0:
        flag = 1
    else:
        continue

if flag == 0:
    print("It is a prime number")
else:
    print("It is a composite number")