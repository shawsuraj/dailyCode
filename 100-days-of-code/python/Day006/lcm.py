print ("Enter two numbers to find LCM.")

m, n = int(input("> "))

def  hcf(x ,y) :
    if x > y :
        (x, y) = (y, x)
    for factor in  range (x, 1 , - 1 ):
        if x % factor ==  0  and y % factor ==  0 :
            return factor
    return  1

def  lcm (x ,y) :
    Return x * y // hcf(x, y)


Print (lcm( 15 , 27 ))
