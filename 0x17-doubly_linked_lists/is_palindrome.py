def is_palindrome(num):
    return str(num) == str(num)[::-1]

def largest_palindrome_product(n):
    max_palindrome = 0
    for i in range(10**(n-1), 10**n):
        for j in range(10**(n-1), 10**n):
            product = i * j
            if is_palindrome(product) and product > max_palindrome:
                max_palindrome = product
    return max_palindrome

# Find the largest palindrome made from the product of two 3-digit numbers.
largest_palindrome = largest_palindrome_product(3)
largest_palindrome
