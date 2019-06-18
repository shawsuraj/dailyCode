print ("Combination finder.")

n = int(input("Enter n: "))
r = int(iinput("Enter r: "))

def  factorial ( n ):
    result =  1
    for num in  range ( 1 , n +  1 ):
        result *= num
    return result


print (factorial( n ) // factorial( r ) // factorial( n - r ))
