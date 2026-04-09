def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)
    
def reduce(a,b):
    n = gcd(a, b)
    return (a // n, b // n)
        
a = int(input("Enter the numerator : "))
b = int(input("Enter the denominator : "))
print(reduce(a,b))