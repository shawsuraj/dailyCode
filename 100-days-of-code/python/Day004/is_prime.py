n = int(input("Enter a number to check if it is a prime number or not: "))

is_prime = True

if n < 0 :
    print ("Negative numbers cannot be prime numbers.")

elif n == 0 or n == 1 :
    print ("0 and 1 are not prime numbers.")

else :
    for x in range(2, n-1) :
        if n % x == 0 :
            is_prime = False
            break

    if is_prime == True :
        print (n, "is a prime number.")

    else :
        print (n, "is not a prime number.")
