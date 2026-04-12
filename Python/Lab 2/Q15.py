class Vector:
    def __init__(self, components):
        self.components = components

    def __str__(self):
        return str(self.components)

    def scalar_mult(self, scalar):
        return Vector([x * scalar for x in self.components])

    def __add__(self, other):
        if len(self.components) != len(other.components):
            return None
        return Vector([a + b for a, b in zip(self.components, other.components)])

    def __sub__(self, other):
        if len(self.components) != len(other.components):
            return None
        return Vector([a - b for a, b in zip(self.components, other.components)])

    def dot_product(self, other):
        if len(self.components) != len(other.components):
            return None
        return sum(a * b for a, b in zip(self.components, other.components))

v1 = Vector([1, 2, 3])
v2 = Vector([4, 5, 6])
print("v1:", v1)
print("v2:", v2)
print("v1 + v2:", v1 + v2)
print("v1 - v2:", v1 - v2)
print("v1 scalar_mult 2:", v1.scalar_mult(2))
print("v1 dot v2:", v1.dot_product(v2))