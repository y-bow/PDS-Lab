def extractDup(l):
    count = {}
    for num in l:
        if num in count:
            count[num] += 1
        else:
            count[num] = 1
    return [num for num in count if count[num] > 1]

l = [10,20,30,20,30,40]
print(extractDup(l))