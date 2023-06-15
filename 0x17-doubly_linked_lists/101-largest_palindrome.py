def is_palindrome(num):
    # Convert the number to a string and check if it reads the same forwards and backwards
    return str(num) == str(num)[::-1]

largest_palindrome = 0

# Iterate through all possible combinations of two 3-digit numbers
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

# Save the result in the file "102-result"
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
