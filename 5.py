def perfect_square(l):
    l1 = []
    for i in l:
        if (i ** 0.5) % 1 == 0:
            l1.append(i)
        else:
            continue
    return l1
    
l = list(map(int,input("Enter the numbers to put in list (separated by a space) : ").split()))
print(perfect_square(l))