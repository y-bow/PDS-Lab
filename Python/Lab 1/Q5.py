a = int(input("Enter an integer : "))
arm = 0
while a > 0:
    b = a % 10
    arm = b*b*b + arm
    a = a // 10
if arm == a:
    print("It is an armstrong number")
else:
    print("It is not an armstrong number")