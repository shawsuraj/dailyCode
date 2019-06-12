# Units Swap
# @shawsuraj

value = float(input("Please Enter the length: "))
unit = input("Please enter the unit (inch/cm): ")

if unit == 'inch' :
    print("%f inches = %f cm "  %(value, value *  2.54))

elif unit == 'cm' :
    print("%f cm = %f inches "  %(value, value /  2.54))

else:
    print("Please enter a valid input.")
    
