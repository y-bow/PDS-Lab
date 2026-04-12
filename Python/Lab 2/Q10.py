def distChar(s1, s2):
    set1 = set(s1)
    set2 = set(s2)
    diff = (set1 - set2) | (set2 - set1)
    return ''.join(sorted(diff))

s1 = "characters"
s2 = "alphabets"
print(distChar(s1, s2))