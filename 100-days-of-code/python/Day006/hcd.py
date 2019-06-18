print ("Enter two numbers to find HCF.")

m, n = int(input("> "))

def  hcf(x ,y) :
    if x > y :
        (x, y) = (y, x)
    for factor in  range (x, 1 , - 1 ):
        if x % factor ==  0  and y % factor ==  0 :
            return factor
    return  1

print (hcf(m ,n ))
