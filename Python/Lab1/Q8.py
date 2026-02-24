a = input("Enter a string : ")
b = ""
for i in a:
    if i not in b:
        b+=i
    else:
        continue

print(b)