a = input("Enter a string : ")
s = ""
for i in a:
    if i >= 'A' and i <= 'Z':
        b = chr(ord(i)^32)
        s+=b
    elif i >= 'a' and i <= 'z':
        b = chr(ord(i)^32)
        s+=b
    else:
        continue
print(s)