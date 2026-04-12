def moveDups(s):
    seen = set()
    unique = ''
    dups = ''
    for char in s:
        if char not in seen:
            seen.add(char)
            unique += char
        else:
            dups += char
    return unique + ' ' + dups

s = "cartoon"
print(moveDups(s))