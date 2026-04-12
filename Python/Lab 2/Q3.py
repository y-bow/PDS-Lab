def sum_cubes(n):
    s = 0
    while n > 0:
        d = n % 10
        s += d**3
        n //= 10
    return s

def is_armstrong(n):
    return sum_cubes(n) == n

num = 371
if is_armstrong(num):
    print(f"{num} is an Armstrong Number")
else:
    print(f"{num} is not an Armstrong Number")