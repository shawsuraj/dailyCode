# Check a number for pallindrome and prime

import math

print("Check a number for pallindrome and prime")

num = int(input("Enter a number: "))

is_prime = True

# Prime Check
for i in range(2, int(math.sqrt(num)) + 1) :
    if num % i == 0 :
        is_prime = False
        break

is_pallindrome = True

order = len(str(num))

# pallindrome check
temp = num
n_num = 0

while temp > 0 :
    n_num *= 10
    n_num += temp % 10
    temp //= 10

if num != n_num :
    is_pallindrome = False


if is_prime == True and is_pallindrome == True :
    print("The number is a prime pallindrome!")

elif is_prime == False and is_pallindrome == True :
    print("The number is pallindrome but not prime!")

elif is_prime == True and is_pallindrome == False :
    print("The number is prime but not pallindrome!")

else :
    print("The number is nor prime neither pallindrome.")
