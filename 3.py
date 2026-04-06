def is_happy(n):
    while True:
        digit = n % 10
        sq = digit*digit
        n = n / 10
        add +=sq
        if add == 1:
            return 
        else:
            is_happy(add)

n = int(input("Enter a number : "))
is_happy(n)