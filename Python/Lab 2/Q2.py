def binary_to_decimal(bin):
    decimal = 0
    for i in range(len(bin)):
        if bin[len(bin)-1-i] == '1':
            decimal += 2**i
    return decimal

print("Decimal =", binary_to_decimal('1011'))