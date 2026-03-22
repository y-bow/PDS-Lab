def shift(s, ccount, acount):
    s = s[acount:] + s[:acount]
    s = s[-ccount:] + s[:-ccount]
    return s

s = "NinjaHattori"
acount = 3
ccount = 0
print(shift(s, ccount, acount))