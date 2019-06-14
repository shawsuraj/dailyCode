print ("The Narcissistic Number (base 10)--")

num = int(input("Enter number: "))

order = len(str(num))

sum = 0
temp = num

while temp > 0:
   digit = temp % 10
   sum += digit ** order
   temp //= 10

if sum == num :
    print(num, "is a narcissistic number")

else :
    print(num, "is not a narcissistic number")
