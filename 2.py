# Create a function get range that accepts real numbers as arguments and returns
# the difference between the maximum and minimum values. Do not use built-in
# functions max and min.

def get_range(l):
    minimum = l[0]
    maximum = l[1]
    for i in range(0, len(l)):
        
        if l[i] < minimum:
            minimum = l[i]

        if l[i] > maximum:
            maximum = l[i]
    return maximum - minimum
    
l = list(map(float,input("Enter the numbers to put in list (separated by a space) : ").split())) 
print(get_range(l))