# Authentication
# @shawsuraj

user = input("Please enter your Username: ")
passwd = input("Please enter your Password: ")

if user == 'admin' and passwd == 'pass' :
    print("Authentication Succensful!")

else:
    print("Authentication Failed!")

#Try it with getpass library
