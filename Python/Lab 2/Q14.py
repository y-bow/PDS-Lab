def kMax(l, k):
    if k < 1 or k > len(l):
        return None
    sorted_l = sorted(l, reverse=True)
    return sorted_l[k-1]

l = [10,2,4,5,7,9]
k = 2
print(kMax(l, k))