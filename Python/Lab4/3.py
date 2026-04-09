def is_happy(n):
    if n == 1:
        return True
    if n == 4:
        return False
    
    add = 0
    while n > 0:
        digit = n % 10
        add += digit*digit
        n //= 10
    return is_happy(add)

n = int(input("Enter a number : "))
if is_happy(n) == True:
    print("It is a happy number")
else:
    print("It is a sad number")