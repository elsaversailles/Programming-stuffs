ones = {1: "one", 2: "two", 3: "three", 4: "four", 5: "five", 6: "six", 7: "seven", 8: "eight", 9: "nine"}
tens = {2: "twenty", 3: "thirty", 4: "forty", 5: "fifty", 6: "sixty", 7: "seventy", 8: "eighty", 9: "ninety"}
teens = {10: "ten", 11: "eleven", 12: "twelve", 13: "thirteen", 14: "fourteen", 15: "fifteen", 16: "sixteen", 17: "seventeen", 18: "eighteen", 19: "nineteen"}

def is_prime(num):
    if num <= 1:
        return False
    if num <= 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False
    for i in range(5, int(num ** 0.5) + 1, 6):
        if num % i == 0 or num % (i + 2) == 0:
            return False
    return True

def convert(num):
    if num < 10:
        return ones[num]
    elif num < 20:
        return teens[num]
    elif num < 100:
        result = tens[num // 10]
        if num % 10 != 0:
            result += " " + ones[num % 10]
        return result
    elif num < 1000:
        result = ones[num // 100] + " hundred "
        if num % 100 != 0:
            result += convert(num % 100)
        return result
    else:
        result = ones[num // 1000] + " thousand "
        if num % 1000 != 0:
            result += convert(num % 1000)
        return result

while True:
    try:
        num = int(input("Enter a number between 1 and 9999: "))
        if 1 <= num <= 9999:
            if is_prime(num):
                print(convert(num))
            else:
                print(f"{num} is not a prime number.")
            break
        else:
            print("Invalid input, please enter a number between 1 and 9999.")
    except ValueError:
        print("Invalid input, please enter a valid number.")
