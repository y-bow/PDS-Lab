def insert_in_sorted(n, l):
    l.append(n)
    l.sort()
    return l

l = list(map(int,input("Enter the numbers to put in list (separated by a space) : ").split()))
n = int(input("Enter the integer to enter in the list : "))
print(insert_in_sorted(n, l))