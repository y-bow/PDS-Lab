def quadratic_roots(a, b, c):
    disc = b**2 - 4*a*c
    if disc < 0:
        return None
    root1 = (-b + disc**0.5) / (2*a)
    root2 = (-b - disc**0.5) / (2*a)
    if root1 > 0:
        return root1
    elif root2 > 0:
        return root2
    else:
        return None

a, b, c = 1, -3, 2
root = quadratic_roots(a, b, c)
if root is not None:
    print(f"Positive root = {root}")
else:
    print("No positive real root")