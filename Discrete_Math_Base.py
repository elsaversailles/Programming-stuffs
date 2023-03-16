def decimal_to_base(num, base):
    """
    Convert a decimal number to the specified base using repetitive division method
    """
    # Initialize variables
    quotient = num
    remainder_list = []
    
    # Perform repetitive division
    while quotient > 0:
        remainder = quotient % base
        quotient = quotient // base
        remainder_list.append((quotient, remainder))
        
    # Reverse the remainder list to get the correct base conversion
    remainder_list.reverse()
    
    # Convert the remainder list to a string and return
    return remainder_list

# Prompt the user for input
num = int(input("Enter a decimal number: "))

# Convert to binary and print solution
binary = decimal_to_base(num, 2)
binary_str = ''.join([str(r[1]) for r in binary])
print(f"{num} in binary is {binary_str} in base 2")
print(f"Solution: {binary_str} = {' + '.join([str(int(d)*2**(len(binary_str)-i-1)) for i, d in enumerate(binary_str)])}")
print("Steps:")
for r in binary:
    print(f"{r[0]} // 2 = {r[1]}")

# Convert to octal and print solution
octal = decimal_to_base(num, 8)
octal_str = ''.join([str(r[1]) for r in octal])
print(f"{num} in octal is {octal_str} in base 8")
print(f"Solution: {octal_str} = {' + '.join([str(int(d)*8**(len(octal_str)-i-1)) for i, d in enumerate(octal_str)])}")
print("Steps:")
for r in octal:
    print(f"{r[0]} // 8 = {r[1]}")

# Convert to hexadecimal and print solution
hexadecimal = decimal_to_base(num, 16)
hexadecimal_str = ''.join([str(r[1]) for r in hexadecimal])
print(f"{num} in hexadecimal is {hexadecimal_str} in base 16")
print(f"Solution: {hexadecimal_str} = {' + '.join([str(int(d,16)*16**(len(hexadecimal_str)-i-1)) for i, d in enumerate(hexadecimal_str)])}")
print("Steps:")
for r in hexadecimal:
    print(f"{r[0]} // 16 = {r[1]}")
